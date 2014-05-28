/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:24:57 by stherman          #+#    #+#             */
/*   Updated: 2013/12/06 18:46:38 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

int			ft_strnequ(const char *s1, const char *s2, t_size n)
{
	register unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (-1);
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i > 0)
		i--;
	return (s1[i] == s2[i]);
}
