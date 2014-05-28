/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:51:31 by stherman          #+#    #+#             */
/*   Updated: 2013/12/05 10:32:34 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<string.h>
#include	"libft.h"

void		ft_putendl_fd(const char *s, t_fd fd)
{
	xwrite(fd, (void *)s, ft_strlen(s));
	xwrite(fd, "\n", 1);
}
