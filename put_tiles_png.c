/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_png.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:27:33 by jschreye          #+#    #+#             */
/*   Updated: 2022/03/01 13:47:52 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx/mlx.h"

void  ft_put_img_png(t_data *img)
{
		img->relative_path = "img/pngzombie.xpm";
		ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

/*void  ft_put_img_png_left(t_data *img)
{
		img->relative_path = "img/pngzombie.xpm";
		ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void  ft_put_img_png_up(t_data *img)
{
		img->relative_path = "img/pngzombie.xpm";
		ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void  ft_put_img_png_down(t_data *img)
{
		img->relative_path = "img/pngzombie.xpm";
		ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}*/