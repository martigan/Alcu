/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspail <mgaspail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 17:11:49 by mgaspail          #+#    #+#             */
/*   Updated: 2014/03/09 23:25:50 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"powf.h"

int			ok(char p, int x, int y, t_data *powf)
{
	int		ind;

	ind = y * powf->col + x;
	if (ind >= 0 && ind < powf->ln * powf->col && powf->board[ind] == p
		&& x < powf->col && x >= 0)
	{
		powf->nmatch++;
		return (1);
	}
	return (0);
}
