/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 23:17:38 by stherman          #+#    #+#             */
/*   Updated: 2014/03/09 13:35:30 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	"powf.h"

int			arg_error(int ac, char **av)
{
	if (ac < 3 || ac > 5)
	{
		ft_puterr(USAGE);
		return (1);
	}
	else if (ft_atoi(av[1]) < 7 || ft_atoi(av[2]) < 6)
	{
		ft_puterr(ARG_ERR);
		return (1);
	}
	return (0);
}
