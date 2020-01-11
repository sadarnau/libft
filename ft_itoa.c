/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:14:45 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/09 16:21:37 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_i(long int n)
{
	long int	test;
	int			i;

	i = 0;
	test = n;
	while (test != 0)
	{
		test = test / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	nl;

	nl = n;
	i = ft_i(nl);
	if (nl < 0)
		i++;
	else if (nl == 0)
		i = 1;
	if ((str = malloc(sizeof(*str) * (i + 1))) == 0)
		return (NULL);
	str[i--] = '\0';
	if (nl < 0)
	{
		str[0] = '-';
		nl = nl * -1;
	}
	else if (nl == 0)
		str[0] = '0';
	nl *= 10;
	while (nl /= 10)
		str[i--] = (nl % 10) + 48;
	return (str);
}
