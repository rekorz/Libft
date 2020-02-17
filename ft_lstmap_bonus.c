/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 16:29:59 by egallego          #+#    #+#             */
/*   Updated: 2020/02/17 17:19:04 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*end;
	t_list		*start;

	if (!lst)
		return (NULL);
	if (!(end = ft_lstnew(f(lst->content))))
		ft_lstdelone(lst, del);
	lst = lst->next;
	start = end;
	while (lst)
	{
		if (!(end->next = ft_lstnew(f(lst->content))))
			ft_lstdelone(lst, del);
		end = end->next;
		lst = lst->next;
	}
	return (start);
}
