/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:29:31 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/28 10:31:56 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int	ft_check_key(int keycode, t_data *img)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 13 || keycode == 126)
		ft_move_player_up(img);
	if (keycode == 1 || keycode == 125)
		ft_move_player_down(img);
	if(keycode == 2 || keycode == 124)
		ft_move_player_right(img);
	if(keycode == 0 || keycode == 123)
		ft_move_player_left(img);
	return(0);
}
