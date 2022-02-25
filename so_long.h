/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:29:41 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/25 15:15:12 by jschreye         ###   ########.fr       */
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
	char		*relative_path;
	char		**array;
	int			player_i;
	int			player_j;
	int			i;
	int			j;
	int			c;
	int			fd;
	int			x;
	int			y;
	int			coins;
}				t_data;

void	comment(t_data img);

void			my_mlx_pixel_put(t_data *data, int x, int y, int color);
void			ft_put_img(t_data *img);
void 			ft_move_player_up(t_data *img);
void 			ft_move_player_down(t_data *img);
void 			ft_move_player_right(t_data *img);
void			ft_move_player_left(t_data *img);
void    		ft_change_map_with_img(t_data *img);
void			ft_get_array_with_ber(t_data *img);
void			ft_put_img_wall(t_data *img);
void			ft_put_img_ground(t_data *img);
void  			ft_put_img_png(t_data *img);
void      		ft_put_tilesets(t_data *img);
void			ft_check_value_array(t_data *img);
int				ft_check_key(int keycode, t_data *img);



#endif
