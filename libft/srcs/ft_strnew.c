/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarcin <mgarcin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:43:55 by stherman          #+#    #+#             */
/*   Updated: 2014/01/31 17:39:08 by mgarcin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

char		*ft_strnew(t_size size)
{
	void	*tmp;

	if ((tmp = xmalloc(size + 1)) == NULL || size == 0)
		return (NULL);
	ft_bzero(tmp, size + 1);
	return ((char *)(tmp));
}
