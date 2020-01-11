/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:07:50 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/07 15:38:21 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int l;

	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == c)
			return (&(((char*)s)[l]));
		l--;
	}
	return (NULL);
}
