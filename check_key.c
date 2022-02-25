/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:29:31 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/25 13:38:13 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int	ft_check_key(int keycode, t_data *img)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 13 || keycode == 62)
		ft_move_player_up(img);
	if (keycode == 1 || keycode == 61)
		ft_move_player_down(img);
	if(keycode == 2 || keycode == 60)
		ft_move_player_right(img);
	if(keycode == 0 || keycode == 59)
		ft_move_player_left(img);
	comment(*img);
	return(0);
}
