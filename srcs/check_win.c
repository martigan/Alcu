/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_win.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 04:29:50 by stherman          #+#    #+#             */
/*   Updated: 2014/03/09 18:02:57 by mgaspail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"powf.h"

static int	check_up(char p, int last_x, int last_y, t_data *powf)
{
	while (ok(p, last_x, last_y - 1, powf))
		last_y--;
	powf->nmatch = 0;
	while (ok(p, last_x, last_y, powf))
		last_y++;
	if (powf->nmatch >= 4)
		return (1);
	powf->nmatch = 0;
	return (0);
}

static int	check_left(char p, int last_x, int last_y, t_data *powf)
{
	while (ok(p, last_x - 1, last_y, powf))
		last_x--;
	powf->nmatch = 0;
	while (ok(p, last_x, last_y, powf))
		last_x++;
	if (powf->nmatch >= 4)
		return (1);
	powf->nmatch = 0;
	return (0);
}

static int	check_up_left(char p, int last_x, int last_y, t_data *powf)
{
	while (ok(p, last_x - 1, last_y - 1, powf))
	{
		last_x--;
		last_y--;
	}
	powf->nmatch = 0;
	while (ok(p, last_x, last_y, powf))
	{
		last_x++;
		last_y++;
	}
	if (powf->nmatch >= 4)
		return (1);
	powf->nmatch = 0;
	return (0);
}

static int	check_up_right(char p, int last_x, int last_y, t_data *powf)
{
	while (ok(p, last_x + 1, last_y - 1, powf))
	{
		last_x++;
		last_y--;
	}
	powf->nmatch = 0;
	while (ok(p, last_x, last_y, powf))
	{
		last_x--;
		last_y++;
	}
	if (powf->nmatch >= 4)
		return (1);
	powf->nmatch = 0;
	return (0);
}

void		check_win(int last_x, int last_y, t_data *powf)
{
	char	p;

	p = powf->board[last_y * powf->col + last_x];
	if (check_up(p, last_x, last_y, powf)
		|| check_left(p, last_x, last_y, powf)
		|| check_up_left(p, last_x, last_y, powf)
		|| check_up_right(p, last_x, last_y, powf))
		powf->winner = p;
	powf->nmatch = 0;
}
