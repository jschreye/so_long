/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tilesets.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:27:33 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/23 12:43:59 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"
#include "mlx/mlx.h"
#include "gnlstruc/get_next_line.h"

t_data  ft_check_value_array(t_data img, int c)
{
    if (c == 48)
       img = ft_put_img_ground(img);
    if (c == 49)
        img = ft_put_img_wall(img);
    if (c == 80)
        img = ft_put_img_png(img);
    return (img);

}

t_data      ft_put_tilesets(t_data img)
{
    int i;
    int j;

    img.y = 0;
    img.x = 0;
    i = 0;
    j = 0;
    while (i < img.c)
    {
        j = 0;
        img.x = 0;
        while (img.array[i][j] != '\0')
        {
            img = ft_check_value_array(img, img.array[i][j]);
            img.x += 30;
            j++;
        }
        img.y += 30;
        i++;
    }
    return (img);
}
