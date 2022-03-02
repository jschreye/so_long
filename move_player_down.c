/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player_down.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:14:36 by jschreye          #+#    #+#             */
/*   Updated: 2022/03/02 12:18:26 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void   ft_player_move_down(t_data *img)
{
        img->x = 0;
        img->y = 0;
        img->array[img->player_j + 1][img->player_i] = 'P';
        img->array[img->player_j][img->player_i] = '0';
        img->count_move++;
        ft_put_tilesets(img);
        ft_print_count(img);
        ft_printf("conteur de mouvement :%d\n", img->count_move);   
}

void    ft_move_player_down(t_data *img)
{
    if (img->array[img->player_j + 1][img->player_i] == '0')
        ft_player_move_down(img);
    else if (img->array[img->player_j + 1][img->player_i] == 'C')
    {
        img->x = 0;
        img->y = 0;
        img->array[img->player_j + 1][img->player_i] = 'P';
        img->array[img->player_j][img->player_i] = '0';
        img->coins--;
        img->count_c--;
        img->count_move++;
        ft_put_tilesets(img);
        ft_print_count(img);
        ft_printf("conteur de mouvement :%d\n", img->count_move);
    }
    else if (img->array[img->player_j + 1][img->player_i] == 'E' 
            && img->coins == 0)
        exit(0);
}