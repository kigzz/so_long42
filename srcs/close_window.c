#include "so_long.h"

int	close_esc(int keysym, t_program *data)
{
	if (keysym == XK_Escape)
	{
		mlx_destroy_window(data->mlx_ptr, data->window);
		data->window = NULL;
		mlx_loop_end(data->mlx_ptr);
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
