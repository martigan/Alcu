/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:07:09 by stherman          #+#    #+#             */
/*   Updated: 2013/12/06 18:44:17 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

void		*ft_memalloc(t_size size)
{
	void	*tmp;

	if ((tmp = xmalloc(size)) == NULL)
		return (NULL);
	ft_bzero(tmp, size);
	return (tmp);
}
