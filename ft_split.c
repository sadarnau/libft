/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:03:25 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/11 18:08:25 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_malloc(char const *s, char c)
{
	char	**tab;
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	if ((tab = malloc(sizeof(*tab) * (count + 1))) == 0)
		return (NULL);
	return (tab);
}

char	**ft_construct(char const *s, char c, char **tab, int i)
{
	int	j;
	int x;
	int	y;

	x = 0;
	while (s[i])
	{
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if ((tab[x] = malloc(sizeof(char) * (i - j + 1))) == 0)
			return (NULL);
		y = 0;
		while (j != i)
			tab[x][y++] = s[j++];
		tab[x][y] = '\0';
		x++;
		while (s[i] && s[i] == c)
			i++;
	}
	tab[x] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	if (!(tab = ft_malloc(s, c)))
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	tab = ft_construct(s, c, tab, i);
	return (tab);
}
