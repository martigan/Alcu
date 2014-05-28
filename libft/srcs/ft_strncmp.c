/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:28:59 by stherman          #+#    #+#             */
/*   Updated: 2013/12/23 18:41:25 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int			ft_strncmp(const char *s1, const char *s2, t_size n)
{
	t_size		i;

	i = 0;
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
