/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:55:07 by stherman          #+#    #+#             */
/*   Updated: 2013/12/06 18:49:21 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, t_size n)
{
	unsigned char			*d;
	unsigned char			*s;
	register unsigned int	i;

	d = (unsigned char *)(dest);
	s = (unsigned char *)(src);
	i = 0;
	c &= 0xff;
	while (i < n)
	{
		if ((*d++ = *s++) == c)
			return (d);
		i++;
	}
	return (NULL);
}
