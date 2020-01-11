/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:31:33 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/08 16:47:20 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	ss1 = s1;
	ss2 = s2;
	i = 0;
	while (i < n)
	{
		if (*(ss1 + i) != *(ss2 + i))
			return ((unsigned char)*(ss1 + i) - (unsigned char)*(ss2 + i));
		i++;
	}
	return (0);
}
