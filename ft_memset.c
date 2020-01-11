/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:43:04 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/08 14:29:53 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			n;
	unsigned char	*str;

	str = b;
	n = 0;
	while (n < len)
	{
		*(str + n) = (unsigned char)c;
		n++;
	}
	return (b);
}
