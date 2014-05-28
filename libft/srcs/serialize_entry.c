/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize_entry.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:21:36 by stherman          #+#    #+#             */
/*   Updated: 2014/03/08 00:21:36 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft.h"
#include		"get_next_line.h"
#include		"serialize.h"

static int		is_entry_end(char *entry, char *tmp)
{
	if (!match(tmp, "</*>"))
		return (0);
	if (!ft_strncmp(entry, (tmp + 2), ft_strlen(entry)))
		return (1);
	else
		return (0);
}

static int		entry_cmp(char *entry, char *tmp)
{
	if (!match(tmp, "<*>"))
		return (0);
	if (!ft_strncmp(entry, (tmp + 1), ft_strlen(entry)))
		return (1);
	else
		return (0);
}

static void		err_miss(char *err, int integ)
{
	if (integ)
	{
		ft_puterr("\033[31mError\033[0m:\n\033[38;5;222m<");
		ft_puterr(err);
		ft_puterr(">\n\n<");
		ft_puterr(err);
		ft_puterr("/>\033[0m\nnot found.\n");
	}
	else
	{
		ft_puterr("\033[31mError\033[0m: \033[38;5;222m</");
		ft_puterr(err);
		ft_puterr(">\033[0m is missing ( ￣(i)￣).\n");
	}
}

t_xml			*get_entry_beg(char *entry, t_xml *xml)
{
	t_xml		*ret;

	while (!entry_cmp(entry, xml->data))
	{
		xml = xml->next;
		if (xml == xml->beg)
		{
			err_miss(entry, 1);
			return (NULL);
		}
	}
	ret = xml;
	while (!is_entry_end(entry, xml->data))
	{
		xml = xml->next;
		if (xml == xml->beg)
		{
			err_miss(entry, 0);
			return (NULL);
		}
	}
	return (ret);
}
