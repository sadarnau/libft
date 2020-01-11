/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:22:58 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/08 15:44:39 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*sdst;
	const unsigned char	*ssrc;
	unsigned char		temp[len];
	size_t				i;

	i = 0;
	sdst = dst;
	ssrc = src;
	while (i < len)
	{
		*(temp + i) = *(ssrc + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(sdst + i) = *(temp + i);
		i++;
	}
	return (dst);
}
