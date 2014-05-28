/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_content.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 16:29:57 by stherman          #+#    #+#             */
/*   Updated: 2014/01/24 16:34:51 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft.h"
#include		"get_next_line.h"

char		**get_content(t_fd fd)
{
	char		**content;
	char		*line;
	int			new_size;
	int			count;

	content		= NULL;
	count		= 0;
	new_size	= sizeof(char *) * 2;
	line		= NULL;
	while (get_next_line(fd, &line))
	{
		content				= ft_realloc_tab(content, new_size);
		content[count++]	= line;
		new_size			+= sizeof(char *);
	}
	xclose(fd);
	return (content);
}
