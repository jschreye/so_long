/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:14:43 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/25 13:36:39 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_move_player_up(t_data *img)
{
    if (img->array[img->player_j - 1][img->player_i] == '0')
    {
        img->x = 0;
        img->y = 0;
        img->array[img->player_j - 1][img->player_i] = 'P';
        img->array[img->player_j][img->player_i] = '0';
        ft_put_tilesets(img);
    }
}