/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:27:13 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/08 17:48:21 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	n;

	n = 0;
	if ((p = malloc(sizeof(char) * (count * size))) == 0)
		return (NULL);
	while (n < (count * size))
	{
		*(p + n) = 0;
		n++;
	}
	return (p);
}
