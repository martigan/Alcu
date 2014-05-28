/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:55:54 by stherman          #+#    #+#             */
/*   Updated: 2013/12/06 18:49:36 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

void		*ft_memchr(const void *s, int c, t_size n)
{
	const unsigned char	*p;

	p = (const unsigned char *)(s);
	while (n-- > 0)
	{
		if (*p == (unsigned char)(c))
			return ((void *)(p));
		p++;
	}
	return (NULL);
}
