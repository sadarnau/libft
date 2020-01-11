/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:31:08 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/11 14:46:36 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_charset(char const *s1, char const *set)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (set[j])
	{
		if (s1[i] && set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int		ft_charset2(char const *s1, char const *set, int i)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (s1[i - 1] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		start;
	char	*str;

	i = 0;
	start = ft_charset(s1, set);
	while (s1[i])
		i++;
	if (start == i)
	{
		if ((str = malloc(sizeof(*s1))) == 0)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	i = ft_charset2(s1, set, i);
	if ((str = malloc(sizeof(*s1) * (i - start + 1))) == 0)
		return (NULL);
	j = 0;
	while (start < i)
		str[j++] = s1[start++];
	str[j] = '\0';
	return (str);
}
