/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:29:41 by jschreye          #+#    #+#             */
/*   Updated: 2022/02/18 10:01:55 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "mlx/mlx.h"
#include <stdio.h>
#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct	s_data
{
    int *mlx_ptr;
    int *win_ptr;
    int x;
    int y;

}				t_data;
			
#endif
