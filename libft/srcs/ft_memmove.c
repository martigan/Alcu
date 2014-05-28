/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:55:31 by stherman          #+#    #+#             */
/*   Updated: 2013/12/06 18:45:22 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void		*ft_memmove(void *dest, const void *src, t_size n)
{
	void	*sav;
	char	*c;

	c	= (char *)(src);
	sav	= dest;
	if ((src < dest) && (t_size)((char *)(dest) - (char *)(src)) < n)
	{
		c = (char *)(src) + n - 1;
		while (c >= (char *)(src))
		{
			*(c + ((char *)(dest) - (char *)(src))) = *c;
			c--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (sav);
}
