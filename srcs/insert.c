/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:47:27 by stherman          #+#    #+#             */
/*   Updated: 2014/03/09 18:02:40 by mgaspail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft.h"
#include		"powf.h"

int				gravity(int x, int y, t_data *powf)
{
	while ((y + 1) < powf->ln && powf->board[(y + 1) * powf->col + x] == BG)
		y++;
	return (y);
}

static void		update_last(int x, int y, t_data *powf)
{
	if (powf->current == P1)
	{
		powf->lpp[0] = x;
		powf->lpp[1] = y;
	}
	else
	{
		powf->lpa[0] = x;
		powf->lpa[1] = y;
	}
}

int				insert_piece(int x, char p, t_data *powf)
{
	int			y;

	y = gravity(x, 0, powf);
	if (x >= 0 && x < powf->col && powf->board[y * powf->col + x] != P1
		&& powf->board[y * powf->col + x] != AI)
	{
		powf->board[y * powf->col + x] = p;
		check_win(x, y, powf);
	}
	else
	{
		ft_putendl_fd(XY_ERR, 2);
		return (0);
	}
	update_last(x, y, powf);
	return (1);
}
