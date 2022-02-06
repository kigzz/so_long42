#include "so_long_bonus.h"

int	animation(t_program *game)
{
	if (game->endloop == 1)
		return (0);

	if (game->enemy == 1)
	{
		mlx_destroy_image(game->mlx_ptr, game->img_enemy);
		game->img_enemy = mlx_xpm_file_to_image(game->mlx_ptr, "images/EN1.xpm",
												&game->img_w, &game->img_h);
	}
	if (game->enemy == 2)
	{
		mlx_destroy_image(game->mlx_ptr, game->img_enemy);
		game->img_enemy = mlx_xpm_file_to_image(game->mlx_ptr, "images/EN2.xpm", &game->img_w, &game->img_h);
	}

	if (game->enemy == 3)
	{
		mlx_destroy_image(game->mlx_ptr, game->img_enemy);
		game->img_enemy = mlx_xpm_file_to_image(game->mlx_ptr, "images/EN3.xpm", &game->img_w, &game->img_h);
	}

	if (game->enemy == 4)
	{
		mlx_destroy_image(game->mlx_ptr, game->img_enemy);
		game->img_enemy = mlx_xpm_file_to_image(game->mlx_ptr, "images/EN4.xpm", &game->img_w, &game->img_h);
		game->enemy = 0;
	}
	map_draw(game);
	game->enemy++;
	return (0);
}