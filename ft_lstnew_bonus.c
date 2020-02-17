/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:31:51 by egallego          #+#    #+#             */
/*   Updated: 2020/02/17 17:19:01 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void *content)
{
	t_list		*node;

	if (!(node = (t_list*)malloc(sizeof(*node))))
		return (NULL);
	if (!content)
		node->content = NULL;
	else
		node->content = content;
	node->next = NULL;
	return (node);
}
