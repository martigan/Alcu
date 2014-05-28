/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_ptr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stephane.herman@live.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/26 06:46:57 by stherman          #+#    #+#             */
/*   Updated: 2013/12/05 10:04:55 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdlib.h>
#include		"libft.h"

void			*xmalloc(int size)
{
	void	*ptr;

	if ((ptr = malloc(size)) == NULL)
		ft_puterr("\033[1;31mError 0x04 Cannot allocate memory !\033[0;37m\n");
	return (ptr);
}

void			xfree(void *ptr)
{
	if (ptr == NULL)
		ft_puterr("\033[1;31mError 0x05 Cannot free this pointer\033[0;37m\n");
	else
		free(ptr);
}
