/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_wordtab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:32:40 by stherman          #+#    #+#             */
/*   Updated: 2013/12/30 22:21:07 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>
#include	"libft.h"

static int	ft_count_word(const char *s)
{
	int		i;
	int		cpt;

	i = 0;
	cpt = 0;
	while (s[i])
	{
		if (s[i] && ft_isprint(s[i]) && s[i] != ' ' && s[i] != '\t')
		{
			cpt = cpt + 1;
			while (s[i] && ft_isprint(s[i]) && s[i] != ' ' && s[i] != '\t')
				i = i + 1;
		}
		if (s[i])
			i = i + 1;
	}
	return (cpt);
}

static int	ft_count_char(const char *s, int *i)
{
	int		cpt;

	cpt = 0;
	while (s[*i] && ft_isprint(s[*i]) && s[*i] != ' ' && s[*i] != '\t')
	{
		cpt = cpt + 1;
		*i = *i + 1;
	}
	return (cpt);
}

char		**ft_str_to_wordtab(const char *str)
{
	int		i;
	int		n;
	int		word;
	char	**tab;

	i = 0;
	n = 0;
	word = ft_count_word(str);
	tab = (char **)(malloc(sizeof(char *) * (word + 1)));
	while (str[i] && word > 0)
	{
		if (str[i] && ft_isprint(str[i]) && str[i] != ' ' && str[i] != '\t')
		{
			tab[n] = ft_strdup(str + i);
			tab[n][ft_count_char(str, &i)] = '\0';
			n = n + 1;
			word = word - 1;
		}
		i = i + 1;
	}
	tab[ft_count_word(str)] = NULL;
	return (tab);
}
