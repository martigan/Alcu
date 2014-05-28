/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:54:32 by stherman          #+#    #+#             */
/*   Updated: 2013/12/06 18:48:32 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void		ft_bzero(void *s, t_size n)
{
	unsigned char	*tmp;

	if (n == 0)
		return ;
	tmp = (unsigned char *)(s);
	while (--n > 0)
		tmp[n] = 0;
	tmp[n] = 0;
}
