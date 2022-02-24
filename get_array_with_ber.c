/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_map_with_img.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:27:33 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/23 12:43:59 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "gnlstruc/get_next_line.h"
#include "so_long.h"
#include "mlx/mlx.h"

char	**ft_get_array_with_ber(t_data img, int fd)
{
	//img.y = 0;
    char *str_full_ber;
    char *tab;

	str_full_ber = ft_strdup("");
   	while (1)
	{
		tab = get_next_line(img.fd);
		if (tab != NULL)
			str_full_ber = ft_strjoin(str_full_ber, tab);
		if (tab == NULL)
			break;
		img.img = ft_get_img(img);
		free(tab);
		img.y += 30;
	}
	img.array = ft_split(str_full_ber, '\n');
	return(img.array);
}