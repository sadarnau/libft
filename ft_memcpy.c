/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:42:48 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/08 15:03:02 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
