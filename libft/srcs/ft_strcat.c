/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherman <stherman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:57:31 by stherman          #+#    #+#             */
/*   Updated: 2013/11/20 14:57:37 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *s1, const char *s2)
{
	char	*tmp;

	tmp = s1;
	while (*s1)
		s1++;
	while (*s2)
		*(s1++) = *(s2++);
	*s1 = '\0';
	return (tmp);
}
