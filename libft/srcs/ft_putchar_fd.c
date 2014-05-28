/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:43:35 by stherman          #+#    #+#             */
/*   Updated: 2013/12/05 10:15:46 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<string.h>
#include	"libft.h"

void		ft_putchar_fd(char c, t_fd fd)
{
	xwrite(fd, &c, 1);
}
