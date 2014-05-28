/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:58:46 by stherman          #+#    #+#             */
/*   Updated: 2013/11/28 13:58:18 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char		*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*tmp2;

	tmp		= NULL;
	tmp2	= (char *)(s);
	while (*tmp2)
	{
		while (*tmp2 && *tmp2 != (char)(c))
			tmp2++;
		if (*tmp2 == (char)(c))
			tmp = tmp2;
		tmp2++;
	}
	return (tmp);
}
