/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stephane.herman@live.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/26 06:22:59 by stherman          #+#    #+#             */
/*   Updated: 2013/12/28 12:58:10 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			GET_NEXT_LINE_H
# define		GET_NEXT_LINE_H

# define		BUFF_SIZE	(4096)

typedef struct	s_read
{
	char		*buffer;
	int			i;
	int			pos;
	int			nb_read;
}				t_read;

int				get_next_line(const int fd, char **line);

#endif			/* !GET_NEXT_LINE_H */
