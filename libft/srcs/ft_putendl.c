/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:21:09 by stherman          #+#    #+#             */
/*   Updated: 2013/12/05 10:32:20 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

void		ft_putendl(const char *s)
{
	xwrite(1, (void *)(s), ft_strlen(s));
	ft_putchar('\n');
}
