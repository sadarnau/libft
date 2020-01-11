/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:26:55 by sadarnau          #+#    #+#             */
/*   Updated: 2019/10/11 16:13:59 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*))
{
	t_list	*start;

	if (!lst)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	if (lst->next)
		lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&start, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (start);
}
