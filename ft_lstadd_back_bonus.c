/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:27:17 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/09 20:58:33 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*curseur;

	curseur = *alst;
	if (!curseur)
		*alst = new;
	else
	{
		while (curseur->next)
			curseur = curseur->next;
		curseur->next = new;
	}
}
