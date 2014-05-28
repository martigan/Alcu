/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:45:58 by stherman          #+#    #+#             */
/*   Updated: 2013/12/05 10:33:51 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	"libft.h"

void		ft_putstr_fd(const char *s, int fd)
{
	xwrite(fd, (void *)s, ft_strlen(s));
}
