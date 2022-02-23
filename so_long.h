/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:29:41 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/23 12:44:03 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include <stdio.h>
#include <fcntl.h>
#include "gnlstruc/get_next_line.h"
#include "libft/libft.h"
#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct	s_data {
	void		*img;
	void		*mlx;
	void		*mlx_win;
	char		*str_full_ber;
	char		*tab;
	char		*relative_path;
	char		**array;
	int			fd;
	int			x;
	int			y;
}				t_data;

void			my_mlx_pixel_put(t_data *data, int x, int y, int color);
void			*ft_put_img(t_data img);
t_data    		ft_change_map_with_img(t_data img);

#endif
