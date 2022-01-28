#include "so_long.h"

# define WINDOW_WIDTH 1920
# define WINDOW_HEIGHT 1080

#define MLX_ERROR 1

#define RED_PIXEL 0xFF0000
#define GREEN_PIXEL 0xFF00
#define WHITE_PIXEL 0xFFFFFF

typedef struct s_vect
{
	int x;
	int y;
} t_vect;

typedef struct s_rect
{
	int	x;
	int	y;
	int width;
	int height;
	int color;
}	t_rect;

typedef struct s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp; /* bits per pixel */
	int		line_len;
	int		endian;
	t_vect	size;
}	t_img;

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	img;
	t_vect	img_position;
}	t_data;

int	handle_keyrelease(int keysym, void *data)
{
	printf("Keyrelease: %d\n", keysym);
	if (keysym == XK_0)
		printf("Salope\n");
	return (0);
}

int	handle_keypress(int keysym, t_data *data)
{
	if (keysym == XK_Escape)
	{
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		data->win_ptr = NULL;
	}
	return (0);
}

void	img_pix_put(t_img *img, int x, int y, int color)
{
	char    *pixel;

	pixel = img->addr + (y * img->line_len + x * (img->bpp / 8));
	*(int *)pixel = color;
}

void	render_background(t_img *img, int color)
{
	int	i;
	int	j;

	i = 0;
	while (i < WINDOW_HEIGHT)
	{
		j = 0;
		while (j < WINDOW_WIDTH)
		{
			img_pix_put(img, j++, i, color);
		}
		++i;
	}
}
/* The x and y coordinates of the rect corresponds to its upper left corner. */

int render_rect(t_img *img, t_rect rect)
{
	int	i;
	int j;

	i = rect.y;
	while (i < rect.y + rect.height)
	{
		j = rect.x;
		while (j < rect.x + rect.width)
			img_pix_put(img, j++, i, rect.color);
		++i;
	}
	return (0);
}

int	render(t_data *data)
{
	if (data->win_ptr == NULL)
		return (1);
//	render_background(&data->img, WHITE_PIXEL);
	render_rect(&data->img, (t_rect){WINDOW_WIDTH - 500, WINDOW_HEIGHT - 500,
									 500, 500, GREEN_PIXEL});
	render_rect(&data->img, (t_rect){0, 0, 500, 300, RED_PIXEL});


	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img.mlx_img, 0, 0);
	return (0);
}

t_img ft_new_sprite(void *mlx, char *path)
{
	t_img img;

	img.mlx_img = mlx_xpm_file_to_image(mlx, path, &img.size.x, &img.size.y);
	img.addr = mlx_get_data_addr(img.mlx_img, &img.bpp, &img.line_len, &img.endian);

	return (img);
}


int	main(void)
{
	t_data	data;

	data.mlx_ptr = mlx_init();
	if (data.mlx_ptr == NULL)
		return (MLX_ERROR);
	data.win_ptr = mlx_new_window(data.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT,
								  "my window");
	if (data.win_ptr == NULL)
	{
		free(data.win_ptr);
		return (MLX_ERROR);
	}

	printf("Yolo\n");
	data.img = ft_new_sprite(data.mlx_ptr, "block.xpm");
	data.img_position.x = 0;
	data.img_position.y = 0;
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, data.img.mlx_img, data.img_position.x, data.img_position.y);

	/* Setup hooks */
//	data.img.mlx_img = mlx_new_image(data.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT);

	mlx_loop_hook(data.mlx_ptr, &render, &data);
	mlx_hook(data.win_ptr, KeyPress, KeyPressMask, &handle_keypress, &data);
//	mlx_hook(data.win_ptr, KeyRelease, KeyReleaseMask, &handle_keyrelease, &data); /* CHANGED */

	mlx_loop(data.mlx_ptr);

	/* we will exit the loop if there's no window left, and execute this code */

	mlx_destroy_image(data.mlx_ptr, data.img.mlx_img);
	mlx_destroy_display(data.mlx_ptr);
	free(data.mlx_ptr);
}