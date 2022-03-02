/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_monster.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:58:38 by jschreye          #+#    #+#             */
/*   Updated: 2022/03/02 12:00:44 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_put_tiles_monster(t_data *img)
{
		img->relative_path = "img/monstre_face.xpm";
		ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);    
}