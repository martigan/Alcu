/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_option.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 13:38:07 by stherman          #+#    #+#             */
/*   Updated: 2014/03/09 17:14:33 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	"powf.h"

static void		set_players(int (*ptr1)(t_data *),
							int (*ptr2)(t_data *), t_data *powf)
{
	powf->p1 = ptr1;
	powf->p2 = ptr2;
}

static void		get_players(char *opt, t_data *powf)
{
	if (!ft_strcmp(opt, "pvp"))
		set_players(player_turn, player_turn, powf);
	else if (!ft_strcmp(opt, "pve"))
		set_players(player_turn, ai_turn, powf);
	else if (!ft_strcmp(opt, "eve"))
		set_players(ai_turn, ai_turn, powf);
	else if (!ft_strcmp(opt, "pvd"))
		set_players(player_turn, ai_turn_drunk, powf);
	else if (!ft_strcmp(opt, "dvd"))
		set_players(ai_turn_drunk, ai_turn_drunk, powf);
	else if (!ft_strcmp(opt, "dve"))
		set_players(ai_turn_drunk, ai_turn, powf);
}

void			get_options(int ac, char **av, t_data *powf)
{
	if (ac >= 4)
		get_players(av[3], powf);
}
