/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_array_with_ber.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:27:33 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/25 15:15:00 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnlstruc/get_next_line.h"
#include "so_long.h"
#include "mlx/mlx.h"

void	ft_get_array_with_ber(t_data *img)
{
	char    *tab;
    char    *str_full_ber;

	img->c = -1;
	str_full_ber = ft_strdup("");
   	while (1)
	{
		tab = get_next_line(img->fd);
		img->c++;
		if (tab != NULL)
			str_full_ber = ft_strjoin(str_full_ber, tab);
		if (tab == NULL)
			break;
		free(tab);
	}
	img->array = ft_split(str_full_ber, '\n');
}