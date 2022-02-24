/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:29:31 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/23 15:20:06 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include "so_long.h"

int	ft_check_key(int keycode, t_data *img)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 13)
		mlx_destroy_image(img->mlx, img->img);
	if (keycode == 13 || keycode == 0 || keycode == 1 || keycode == 2
		|| keycode == 62 || keycode == 59 || keycode == 61 || keycode == 60)
		ft_move_player(keycode, *img);
	return(0);
}

int	main(int argc, char **argv)
{
	t_data	img;
	
	argc = 0;
	img.fd = open(argv[1], O_RDONLY);
	img.mlx = mlx_init();
	img.mlx_win = mlx_new_window(img.mlx, 1920, 1080, "bande de fouf!");
	img = ft_get_array_with_ber(img);
	img = ft_put_tilesets(img);
	mlx_key_hook(img.mlx_win, ft_check_key, &img);
	mlx_loop(img.mlx);
}