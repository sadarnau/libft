/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:06:36 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/08 18:39:17 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*sdst;
	const unsigned char	*ssrc;
	size_t				i;

	i = 0;
	sdst = dst;
	ssrc = src;
	while (i < n)
	{
		*(sdst + i) = *(ssrc + i);
		if ((unsigned char)c == *(ssrc + i))
			return ((void*)(sdst + i + 1));
		i++;
	}
	return (NULL);
}
