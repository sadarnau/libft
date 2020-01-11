/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:11:07 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/11 14:35:04 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curseur;
	t_list	*temp;

	curseur = *lst;
	while (curseur && del)
	{
		del(curseur->content);
		temp = curseur->next;
		free(curseur);
		curseur = temp;
	}
	*lst = NULL;
}
