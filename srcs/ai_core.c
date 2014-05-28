/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ai_core.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspail <mgaspail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 17:02:54 by mgaspail          #+#    #+#             */
/*   Updated: 2014/03/09 23:19:06 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<time.h>
#include	<stdlib.h>
#include	"libft.h"
#include	"powf.h"

static int	attack(t_data *powf, int *x)
{
	int		ret;
	int		*tab;
	int		ind;

	ret = 1;
	if (!(tab = (int *)xmalloc(sizeof(int) * powf->col)))
		return (-1);
	ind = 0;
	while (ind < powf->col)
	{
		tab[ind] = ai_checks(powf, ind, powf->current);
		ind++;
	}
	ind = -1;
	while (++ind < powf->col)
	{
		*x = (ret >= tab[ind] ? *x : ind);
		ret = (ret >= tab[ind] ? ret : tab[ind]);
	}
	xfree(tab);
	return (ret);
}

static int	defense(t_data *powf, int *x)
{
	int		ret;
	int		*tab;
	int		ind;

	ret = 1;
	if (!(tab = (int *)xmalloc(sizeof(int) * powf->col)))
		return (-1);
	ind = 0;
	while (ind < powf->col)
	{
		tab[ind] = ai_checks(powf, ind, powf->current == P1 ? AI : P1);
		ind++;
	}
	ind = -1;
	while (++ind < powf->col)
	{
		*x = (ret > tab[ind] ? *x : ind);
		ret = (ret > tab[ind] ? ret : tab[ind]);
	}
	xfree(tab);
	return (ret);
}

static void	first_move(t_data *powf)
{
	int		tmp;

	srand(time(NULL));
	tmp = rand() % 3;
	if (tmp == 0 && powf->lpp[0] - 1 >= 0)
		insert_piece(powf->lpp[0] - 1, powf->current, powf);
	else if (tmp == 1 && powf->lpp[0] + 1 < powf->col)
		insert_piece(powf->lpp[0] + 1, powf->current, powf);
	else
		insert_piece(powf->lpp[0], powf->current, powf);
}

static void	rand_move(int x_atk, int x_def, t_data *powf)
{
	srand(time(NULL));
	if (rand() % 2)
		insert_piece(x_atk, powf->current, powf);
	else
		insert_piece(x_def, powf->current, powf);
}

int			ai_game(t_data *powf)
{
	int		x_atk;
	int		x_def;
	int		atk;
	int		def;

	x_atk = powf->current == AI ? powf->lpa[0] : powf->lpp[0];
	x_def = powf->current == AI ? powf->lpp[0] : powf->lpa[0];
	if (powf->lpp[0] == -1)
		insert_piece(powf->col / 2, powf->current, powf);
	else if (powf->lpa[0] == -1)
		first_move(powf);
	else if ((atk = attack(powf, &x_atk)) > (def = defense(powf, &x_def))
			 && def >= 0)
				insert_piece(x_atk, powf->current, powf);
	else if (def >= 2)
		insert_piece(x_def, powf->current, powf);
	else
		rand_move(x_atk, x_def, powf);
	powf->nmatch = 0;
	return (1);
}
