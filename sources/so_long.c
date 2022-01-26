#include "so_long.h"

# define WINDOW_WIDTH 1920
# define WINDOW_HEIGHT 1080

typedef struct s_data {
	void	*img;
	char 	*addr;
	int 	bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char *dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx_ptr;
	void 	*win_ptr;
	t_data 	img;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "My first window!");
	img.img = mlx_new_image(mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
//	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
	mlx_pixel_put(mlx_ptr, win_ptr, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, 0x00FF0000);
	mlx_put_image_to_window(mlx_ptr, win_ptr, img.img, 1920, 1080);
	mlx_loop(mlx_ptr);

	/* Free */

	mlx_destroy_window(mlx_ptr, win_ptr);
	mlx_destroy_display(mlx_ptr);
	free(mlx_ptr);
	return (0);
}