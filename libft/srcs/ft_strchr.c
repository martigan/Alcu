/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:58:36 by stherman          #+#    #+#             */
/*   Updated: 2013/11/20 14:58:37 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char		*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)(s);
	while (*tmp && *tmp != (char)(c))
		tmp++;
	return (*tmp == (char)(c) ? tmp : NULL);
}
