/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:53:03 by egallego          #+#    #+#             */
/*   Updated: 2019/12/03 19:19:14 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	lenaux;
	char	*sourceaux;
	char	*destinyaux;

	i = -1;
	sourceaux = (char*)src;
	destinyaux = dst;

	if (dst == 0 && src == 0)
		return (dst);
	if (dst < src)
	{
		
	}
	while (++i < lenaux)
	{	
		destinyaux[i] = sourceaux[i];
	}
	return (dst);
}
