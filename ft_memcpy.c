/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:30:26 by egallego          #+#    #+#             */
/*   Updated: 2019/12/03 12:58:46 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destiny;

	i = 0;
	source = (char*)src;
	destiny = dst;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dst);
}
