/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player_right.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:14:41 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/25 14:44:24 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_move_player_right(t_data *img)
{
    if (img->array[img->player_j][img->player_i + 1] == '0')
    {
        img->x = 0;
        img->y = 0;
        img->array[img->player_j][img->player_i + 1] = 'P';
        img->array[img->player_j][img->player_i] = '0';
        ft_put_tilesets(img);
    }
    else if (img->array[img->player_j][img->player_i + 1] == 'C')
    {
        img->x = 0;
        img->y = 0;
        img->array[img->player_j][img->player_i + 1] = 'P';
        img->array[img->player_j][img->player_i] = '0';
        img->coins--;
        ft_put_tilesets(img);
    }
    else if (img->array[img->player_j][img->player_i + 1] == 'E' 
            && img->coins == 0)
        exit(0);
}