/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_map_with_img.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:27:33 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/23 12:43:59 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnlstruc/get_next_line.h"
#include "so_long.h"
#include "mlx/mlx.h"

void	*ft_get_img(t_data img)
{
	int	i;

	img.x = 0;
	i = 0;
	while (img.tab[i])
	{
		if (img.tab[i] == 49)
		{
			img.relative_path = "img/choppe.xpm";
			img.img = ft_put_img(img);
			mlx_put_image_to_window(img.mlx, img.mlx_win, img.img, img.x, img.y);
			img.x += 30;
		}
		if (img.tab[i] == 48)
		{
			img.relative_path = "img/herbe.xpm";
			img.img = ft_put_img(img);
			mlx_put_image_to_window(img.mlx, img.mlx_win, img.img, img.x, img.y);
			img.x += 30;
		}
		if (img.tab[i] == 80)
		{
			img.relative_path = "img/pngzombie.xpm";
			img.img = ft_put_img(img);
			mlx_put_image_to_window(img.mlx, img.mlx_win, img.img, img.x, img.y);
			img.x += 30;
		}
		i++;
	}
	return(img.img);
}

t_data	ft_change_map_with_img(t_data img)
{
	img.y = 0;

	img.str_full_ber = ft_strdup("");
   	while (1)
	{
		img.tab = get_next_line(img.fd);
		if (img.tab != NULL)
			img.str_full_ber = ft_strjoin(img.str_full_ber, img.tab);
		if (img.tab == NULL)
			break;
		img.img = ft_get_img(img);
		free(img.tab);
		img.y += 30;
	}
	img.array = ft_split(img.str_full_ber, '\n');
	return(img);
}