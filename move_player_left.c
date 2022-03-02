/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:14:39 by jschreye          #+#    #+#             */
/*   Updated: 2022/03/02 13:59:01 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void   ft_player_move_left(t_data *img)
{
        img->x = 0;
        img->y = 0;
        img->array[img->player_j][img->player_i - 1] = 'P';
        img->array[img->player_j][img->player_i] = '0';
        img->count_move++;
        if (img->array[img->monster_j][img->monster_i + 1] == '0')
            ft_move_monster_right(img);
        ft_put_tilesets(img);
        ft_print_count(img);
        ft_printf("conteur de mouvement :%d\n", img->count_move);    
}

void ft_move_player_left(t_data *img)
{
    if (img->array[img->player_j][img->player_i - 1] == '0')
        ft_player_move_left(img);
    else if (img->array[img->player_j][img->player_i - 1] == 'C')
    {
        img->x = 0;
        img->y = 0;
        img->array[img->player_j][img->player_i - 1] = 'P';
        img->array[img->player_j][img->player_i] = '0';
        img->coins--;
        img->count_c--;
        img->count_move++;
        ft_put_tilesets(img);
        ft_print_count(img);
        ft_printf("conteur de mouvement :%d\n", img->count_move);
    }
    else if ((img->array[img->player_j][img->player_i - 1] == 'E' 
            && img->coins == 0) || img->array[img->player_j][img->player_i - 1] == 'M')
        exit(0);
}