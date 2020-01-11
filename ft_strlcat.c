/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:37:45 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/08 14:10:37 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ls;
	size_t	ld;

	ls = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	ld = i;
	while (src[ls] != '\0')
		ls++;
	if (dstsize == 0)
		return (ls);
	j = 0;
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	if (dstsize - 1 < ld)
		return (dstsize + ls);
	return (ls + ld);
}
