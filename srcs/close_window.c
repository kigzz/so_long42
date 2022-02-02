#include "so_long.h"

static void	map_draw(t_program *game)
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

int	close_esc(int keysym, t_program *game)
{
	if (keysym == KEY_ESC)
	{
		mlx_destroy_window(game->mlx_ptr, game->window);
		game->window = NULL;
		mlx_loop_end(game->mlx_ptr);
	}
	if (keysym == KEY_W)
	{
		if (game->map_save[game->player_position.x - 1][game->player_position.y] == '1')
			return (0);
		game->map_save[game->player_position.x][game->player_position.y] = '0';
		game->map_save[game->player_position.x - 1][game->player_position.y] = 'P';
		game->player_position.x -= 1;
		map_draw(game);
	}
	else if (keysym == KEY_S)
	{
		if (game->map_save[game->player_position.x + 1][game->player_position.y] == '1')
			return (0);
		game->map_save[game->player_position.x][game->player_position.y] = '0';
		game->map_save[game->player_position.x + 1][game->player_position.y] = 'P';
		game->player_position.x += 1;
		map_draw(game);
	}
	else if (keysym == KEY_A)
	{
		if (game->map_save[game->player_position.x][game->player_position.y - 1] == '1')
			return (0);
		game->map_save[game->player_position.x][game->player_position.y] = '0';
		game->map_save[game->player_position.x][game->player_position.y - 1] = 'P';
		game->player_position.y -= 1;
		map_draw(game);
	}
	else if (keysym == KEY_D)
	{
		if (game->map_save[game->player_position.x][game->player_position.y + 1] == '1')
			return (0);
		game->map_save[game->player_position.x][game->player_position.y] = '0';
		game->map_save[game->player_position.x][game->player_position.y + 1] = 'P';
		game->player_position.y += 1;
		map_draw(game);
	}
	return (0);
}

int	close_redcross(t_program *data)
{
	mlx_destroy_window(data->mlx_ptr, data->window);
	data->window = NULL;
	mlx_loop_end(data->mlx_ptr);
	return (0);
}
