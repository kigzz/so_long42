#include "so_long.h"

void	map_draw(t_program *game)
{
	int i;
	int j;

	i = -1;
	while (game->map_save[++i])
	{
		j = -1;
		while (game->map_save[i][++j] != '\0')
		{
			if (game->map_save[i][j] == '1')
				mlx_put_image_to_window(game->mlx_ptr, game->window, game->img_walls, j * IMG_PIX,
										i * IMG_PIX);
			else if (game->map_save[i][j] == 'P')
				mlx_put_image_to_window(game->mlx_ptr, game->window, game->img_player, j * IMG_PIX,
										i * IMG_PIX);
			else if (game->map_save[i][j] == 'C')
				mlx_put_image_to_window(game->mlx_ptr, game->window, game->img_collectables, j * IMG_PIX,
										i * IMG_PIX);
			else if (game->map_save[i][j] == '0')
				mlx_put_image_to_window(game->mlx_ptr, game->window, game->img_ground, j * IMG_PIX,
										i * IMG_PIX);
			else if (game->map_save[i][j] == 'E')
				mlx_put_image_to_window(game->mlx_ptr, game->window, game->img_exit, j * IMG_PIX,
										i * IMG_PIX);
		}
	}
}
