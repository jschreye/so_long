/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:29:31 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/23 15:20:06 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_data ft_move_player(int keycode, t_data img)
{
    if ((keycode == 13 || keycode == 62) && img.array[img.x][img.y] != 1)
        img.y -= 30;
    if ((keycode == 0 || keycode == 59) && img.array[img.x][img.y] != 1)
        img.x -= 30;
    if ((keycode == 1 || keycode == 61) && img.array[img.x][img.y] != 1)
        img.y += 30;
    if ((keycode == 2 || keycode == 60) && img.array[img.x][img.y] != 1)
        img.x += 30;
    return (img);
}