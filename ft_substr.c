/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:54:14 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/11 18:22:49 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		if ((ptr = malloc(sizeof(*s))) == 0)
			return (NULL);
		ptr[i] = '\0';
		return (ptr);
	}
	if ((ptr = malloc(sizeof(*s) * (len + 1))) == 0)
		return (NULL);
	while (i < len && s[i + start])
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
