/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:56:41 by stherman          #+#    #+#             */
/*   Updated: 2013/12/06 18:50:31 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_size		ft_strlen(const char *str)
{
	register t_size	size;

	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return (size);
}
