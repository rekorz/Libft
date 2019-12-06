/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:53:03 by egallego          #+#    #+#             */
/*   Updated: 2019/12/06 18:36:07 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*sourceaux;
	char	*destinyaux;

	i = 0;
	sourceaux = (char*)src;
	destinyaux = dst;
	if (dst == 0 && src == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		((unsigned char *)dst)[len] = ((unsigned const char *)src)[len];
	return (dst);
}
