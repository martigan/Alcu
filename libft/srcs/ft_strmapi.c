/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:01:49 by stherman          #+#    #+#             */
/*   Updated: 2013/12/05 10:35:38 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int i, char))
{
	char					*tmp;
	register unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL
		|| (tmp = (char *)(xmalloc(sizeof(char) * ft_strlen(s) + 1))) == NULL)
		return (NULL);
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
