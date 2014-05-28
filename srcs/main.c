/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 23:16:02 by stherman          #+#    #+#             */
/*   Updated: 2014/03/09 23:31:30 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft.h"
#include		"powf.h"

int				main(int ac, char **av)
{
	t_data		powf;

	if (arg_error(ac, av))
		return (1);
	init_powf(ft_atoi(av[2]), ft_atoi(av[1]), &powf);
	if (ac > 3)
		get_options(ac, av, &powf);
	display_board(&powf);
	if (start_the_game(&powf) == 0)
		ft_putstr(MALLOC);
	if (!powf.winner)
		ft_putstr(NO_SPC);
	else
		display_winner(&powf);
	xfree(powf.board);
	return (0);
}
