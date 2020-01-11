/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:20:48 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/09 14:28:10 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		l;
	int		j;

	l = ft_strlen(s1) + ft_strlen(s2);
	if ((str = malloc(sizeof(*s1) * (l + 1))) == 0)
		return (NULL);
	l = 0;
	while (s1[l])
	{
		str[l] = s1[l];
		l++;
	}
	j = 0;
	while (s2[j])
	{
		str[l] = s2[j];
		l++;
		j++;
	}
	str[l] = '\0';
	return (str);
}
