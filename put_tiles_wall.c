/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_wall.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:43:46 by jschreye          #+#    #+#             */
/*   Updated: 2022/03/01 14:42:56 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void  ft_put_img_wall(t_data *img)
{
	    img->relative_path = "img/coinsmodif.xpm";
	    ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}

/*void  ft_put_img_wall_in_map(t_data *img)
{
    
}*/