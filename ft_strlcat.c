/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:33:41 by egallego          #+#    #+#             */
/*   Updated: 2019/12/10 11:42:29 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t n;

	i = ft_strlen(dst);
	if (dstsize > i)
	{
		n = 0;
		while (--dstsize - i && *(src + n))
		{
			*(dst + i + n) = *(src + n);
			++n;
		}
		*(dst + i + n) = '\0';
		return (i + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
}
