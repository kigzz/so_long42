#include "so_long.h"

int	check_walls(t_program game)
{
	int		i;
	size_t	len;

	i = -1;
	len = ft_strlen(game.map_save[0]);
	while (game.map_save[++i] != NULL)
	{
		if (game.map_save[i][0] != '1' || game.map_save[i][len - 1] != '1')
			return (1);
	}
	i = 0;
	while (game.map_save[0][i] && game.map_save[game.map_height - 1][i])
	{
		if (game.map_save[0][i] != '1' || game.map_save[game.map_height - 1][i] != '1')
			return (1);
		i++;
	}
	return (0);
}
