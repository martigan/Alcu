/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarcin <mgarcin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:46:46 by stherman          #+#    #+#             */
/*   Updated: 2014/01/31 17:38:58 by mgarcin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char			*tmp;
	register int	i;

	i = -1;
	if (s == NULL || f == NULL
		|| (tmp = (char *)(xmalloc(sizeof(char) * ft_strlen(s) + 1))) == NULL)
		return (NULL);
	while (s[++i])
		tmp[i] = f(s[i]);
	tmp[i] = '\0';
	return (tmp);
}
