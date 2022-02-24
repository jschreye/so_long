/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles.c                                        :+:      :+:    :+:   */
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

t_data  ft_put_img_wall(t_data img)
{
	    img.relative_path = "img/choppe.xpm";
	    img.img = ft_put_img(img);
		mlx_put_image_to_window(img.mlx, img.mlx_win, img.img, img.x, img.y);
        return(img);
}

t_data  ft_put_img_ground(t_data img)
{
		img.relative_path = "img/herbe.xpm";
		img.img = ft_put_img(img);
		mlx_put_image_to_window(img.mlx, img.mlx_win, img.img, img.x, img.y);
        return(img);
}

t_data  ft_put_img_png(t_data img)
{
		img.relative_path = "img/pngzombie.xpm";
		img.img = ft_put_img(img);
		mlx_put_image_to_window(img.mlx, img.mlx_win, img.img, img.x, img.y);
        return(img);
}

/*t_data  ft_put_img_four(t_data img)
{
    
}

t_data  ft_put_img_five(t_data img)
{
    
}*/