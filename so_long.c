/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:29:31 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/25 12:32:34 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include "so_long.h"

void	comment(t_data img)
{
	int	i = -1;
	while (++i < img.c)
	{
		int	j = -1;
		while (img.array[i][++j] != '\0')
		{
			printf("%c", img.array[i][j]);
		}
		printf("\n");
	}
}

int	main(int argc, char **argv)
{
	t_data	img;
	
	argc = 0;
	img.y = 0;
    img.x = 0;
	img.coins = 0;
	img.fd = open(argv[1], O_RDONLY);
	img.mlx = mlx_init();
	img.mlx_win = mlx_new_window(img.mlx, 1920, 1080, "bande de fouf!");
	ft_get_array_with_ber(&img);
	ft_put_tilesets(&img);
	mlx_key_hook(img.mlx_win, ft_check_key, &img);
	comment(img);
	mlx_loop(img.mlx);
}