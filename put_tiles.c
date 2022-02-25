/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:27:33 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/25 10:50:27 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx/mlx.h"

void  ft_put_img_wall(t_data *img)
{
	    img->relative_path = "img/choppe.xpm";
	    ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void  ft_put_img_ground(t_data *img)
{
		img->relative_path = "img/herbe.xpm";
		ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

void  ft_put_img_png(t_data *img)
{
		img->relative_path = "img/pngzombie.xpm";
		ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

/*t_data  ft_put_img_coins(t_data img)
{
    
}

t_data  ft_put_img_exit(t_data img)
{
    
}*/