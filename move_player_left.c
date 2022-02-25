/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:14:39 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/25 13:37:58 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_move_player_left(t_data *img)
{
    if (img->array[img->player_j][img->player_i - 1] == '0')
    {
        img->x = 0;
        img->y = 0;
        img->array[img->player_j][img->player_i - 1] = 'P';
        img->array[img->player_j][img->player_i] = '0';
        ft_put_tilesets(img);
    }
}