#include "so_long.h"

int game_init(t_program *game)
{
	game->mlx_ptr = mlx_init();
	if (!game->mlx_ptr)
		return (1);
	printf("countline = %ld\n", game->map_height);
	printf("width = %ld", ft_strlen(game->map_save[0]));
	int window_height = game->map_height * IMG_PIX;
	printf("window height = %d\n", window_height);
	int window_width = ft_strlen(game->map_save[0]) * IMG_PIX;
	printf("window width = %d\n", window_width);
	game->window = mlx_new_window(game->mlx_ptr, window_width, window_height, "SoLong");
	return (0);
}
