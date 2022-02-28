/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_items_in_map.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:12:04 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/28 17:15:57 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_count_items(char c, t_data *img)
{
    if (c == 'P')
        img->count_p++;
    if (c == 'E')
        img->count_e++;
    if (c == 'C')
        img->count_c++;
}

void    ft_check_items_in_map(t_data *img)  
{
    if (img->count_p < 1 || img->count_p > 1)
    {
        write (1, "Error\n NO PLAYER OR TOO MANY PLAYER", 35);
        exit(0);
    }
    if (img->count_e < 1)
    {
        write (1, "Error\n NO EXIT", 14);
        exit(0);
    }
    if (img->count_c < 1)
    {
        write (1, "Error\n NO COINS", 15);
        exit(0);
    }
}