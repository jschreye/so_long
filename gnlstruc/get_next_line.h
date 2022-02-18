/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:24:49 by jschreye          #+#    #+#             */
/*   Updated: 2021/12/03 09:41:05 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

typedef struct s_read
{
	int		fd;
	int		max;
	int		pos;
	char	data[BUFFER_SIZE];
}	t_read;

int		init_check(int fd, t_read *info);
char	read_check(t_read *info);
char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*join(char *str, char c);

#endif
