/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:22:01 by egallego          #+#    #+#             */
/*   Updated: 2019/12/03 16:52:43 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*source;
	unsigned char		*destiny;

	i = -1;
	source = (unsigned char *)src;
	destiny = (unsigned char *)dst;
	while (++i < n)
	{
		destiny[i] = source[i];
		if (source[i] == (unsigned char)c && source[i])
			return (&destiny[i + 1]);
	}
	return (0);
}
