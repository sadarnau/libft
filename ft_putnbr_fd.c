/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:23:37 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/10 12:31:34 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nl;

	nl = n;
	if (nl < 0)
	{
		nl = nl * -1;
		write(fd, "-", 1);
	}
	if (nl > 9)
	{
		ft_putnbr_fd(nl / 10, fd);
		ft_putnbr_fd(nl % 10, fd);
	}
	else
		ft_putchar_fd(nl + 48, fd);
}
