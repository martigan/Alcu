/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:58:21 by stherman          #+#    #+#             */
/*   Updated: 2013/12/06 18:45:47 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_size		ft_strlcat(char *dst, const char *src, t_size size)
{
	register char		*d;
	register const char	*s;
	register t_size		n;
	t_size				dlen;

	d		= dst;
	s		= src;
	n		= size;
	while (*d != '\0' && n-- != 0)
		d++;
	dlen	= d - dst;
	n		= size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
