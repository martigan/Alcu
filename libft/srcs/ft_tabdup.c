/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 09:44:34 by stherman          #+#    #+#             */
/*   Updated: 2014/02/18 16:14:07 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

char		**ft_tabdup(char **tab)
{
	char	**beg;
	char	**tmp;
	int		size;

	tmp = tab;
	size = 0;
	while (*tmp != NULL)
	{
		size++;
		tmp++;
	}
	if ((tmp = xmalloc(sizeof(char *) * (++size))) == NULL)
		return (NULL);
	beg = tmp;
	while (*tab)
		*(tmp++) = ft_strdup(*(tab++));
	*tmp = NULL;
	return (beg);
}
