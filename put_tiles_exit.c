/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tiles_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:53:18 by jschreye          #+#    #+#             */
/*   Updated: 2022/03/01 14:41:02 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void  ft_put_tiles_exit(t_data *img)
{
		img->relative_path = "img/sole.xpm";
		ft_put_img(img);
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->x, img->y);
}