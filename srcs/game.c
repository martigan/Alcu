/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 03:11:43 by stherman          #+#    #+#             */
/*   Updated: 2014/03/09 23:39:23 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"
#include	"powf.h"

int			player_turn(t_data *powf)
{
	int		read_size;
	char	buff[4096];

	ft_putstr(PROMPT);
	if ((read_size = xread(0, buff, 4096)) == -1)
		return (0);
	if (read_size == 1)
		return (1);
	buff[read_size - 1] = '\0';
	if (insert_piece(ft_atoi(buff) - 1, powf->current, powf) == 1)
	{
		display_board(powf);
		powf->current = powf->current == P1 ? AI : P1;
		powf->turn--;
	}
	return (1);
}

int			ai_turn_drunk(t_data *powf)
{
	ft_putstr(DRUNK);
	while (!insert_piece(rand() % powf->col, powf->current, powf))
		;
	display_board(powf);
	powf->current = powf->current == P1 ? AI : P1;
	powf->turn--;
	return (1);
}

int			ai_turn(t_data *powf)
{
	ft_putstr(AI_TXT);
	if (ai_game(powf) == 0)
		return (0);
	display_board(powf);
	powf->current = powf->current == P1 ? AI : P1;
	powf->turn--;
	return (1);
}

int			start_the_game(t_data *powf)
{
	while (powf->turn && !powf->winner)
	{
		if (powf->current == P1 && powf->p1(powf))
			continue ;
		else if (!powf->p2(powf))
			continue ;
	}
	return (1);
}
