/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 23:42:16 by stherman          #+#    #+#             */
/*   Updated: 2014/03/09 19:44:09 by mgaspail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<time.h>
#include	"libft.h"
#include	"powf.h"

void		init_powf(int ln, int col, t_data *powf)
{
	powf->ln = ln;
	powf->col = col;
	if ((powf->board = xmalloc(ln * col + 1)) == NULL)
		return ;
	ft_memset(powf->board, BG, ln * col + 1);
	powf->board[ln * col] = '\0';
	srand(time(NULL));
	powf->current = rand() % 2 ? P1 : AI;
	powf->turn = ln * col;
	powf->winner = '\0';
	powf->nmatch = 1;
	powf->lpp[0] = -1;
	powf->lpa[0] = -1;
	powf->p1 = player_turn;
	powf->p2 = ai_turn;
}
