/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:32:45 by stherman          #+#    #+#             */
/*   Updated: 2014/03/09 23:11:07 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	"powf.h"

static void	display_numbers(int nb_col)
{
	int		i;
	int		nb;

	i = 1;
	while (i <= nb_col)
	{
		nb = i % 10;
		if (!nb)
		{
			ft_putstr(MARK);
			ft_putnbr(nb);
			ft_putstr(COL_RE);
		}
		else
			ft_putnbr(nb);
		i++;
	}
	ft_putchar('\n');
}

static void	display_p1(int i, t_data *powf)
{
	ft_putstr(COL_P1);
	ft_putchar(powf->board[i]);
	ft_putstr(COL_RE);
}

static void	display_ai(int i, t_data *powf)
{
	ft_putstr(COL_AI);
	ft_putchar(powf->board[i]);
	ft_putstr(COL_RE);
}

void		display_board(t_data *powf)
{
	int		i;

	i = 0;
	while (powf->board[i])
	{
		if (powf->board[i] == P1)
			display_p1(i, powf);
		else if (powf->board[i] == AI)
			display_ai(i, powf);
		else
		{
			ft_putstr(COL_BG);
			ft_putchar(powf->board[i]);
			ft_putstr(COL_RE);
		}
		i++;
		if (!(i % powf->col))
			ft_putchar('\n');
	}
	display_numbers(powf->col);
	ft_putchar('\n');
}

void		display_winner(t_data *powf)
{
	ft_putstr(WIN);
	ft_putstr("AND THE WINNER IS");
	ft_putstr(COL_RE);
	ft_putstr(" : ");
	if (powf->winner == P1)
		ft_putstr(COL_P1);
	else if (powf->winner == AI)
		ft_putstr(COL_AI);
	ft_putchar(powf->winner);
	ft_putstr(COL_RE);
	ft_putchar('\n');
}
