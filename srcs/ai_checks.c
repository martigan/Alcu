/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ai_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspail <mgaspail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 17:24:36 by mgaspail          #+#    #+#             */
/*   Updated: 2014/03/09 23:23:42 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"powf.h"
#include	"libft.h"

static int		check_up(char p, int last_x, int last_y, t_data *powf)
{
	while (ok(p, last_x, last_y - 1, powf))
		last_y--;
	powf->nmatch = 0;
	while (ok(p, last_x, last_y, powf))
		last_y++;
	return (powf->nmatch);
}

static int		check_left(char p, int last_x, int last_y, t_data *powf)
{
	while (ok(p, last_x - 1, last_y, powf))
		last_x--;
	powf->nmatch = 0;
	while (ok(p, last_x, last_y, powf))
		last_x++;
	return (powf->nmatch);
}

static int		check_up_left(char p, int last_x, int last_y, t_data *powf)
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
	return (powf->nmatch);
}

static int		check_up_right(char p, int last_x, int last_y, t_data *powf)
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
	return (powf->nmatch);
}

int				ai_checks(t_data *powf, int x, char c)
{
	int			y;
	int			ret;
	int			tmp;

	ret = 0;
	if ((y = gravity(x, -1, powf)) >= 0)
	{
		powf->board[y * powf->col + x] = c;
		ret = (ret > (tmp = check_up_right(c, x, y, powf)) ? ret : tmp);
		ret = (ret > (tmp = check_up_left(c, x, y, powf)) ? ret : tmp);
		ret = (ret > (tmp = check_up(c, x, y, powf)) ? ret : tmp);
		ret = (ret > (tmp = check_left(c, x, y, powf)) ? ret : tmp);
		powf->board[y * powf->col + x] = BG;
		powf->nmatch = 0;
	}
	return (ret);
}
