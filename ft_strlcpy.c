/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:18:22 by egallego          #+#    #+#             */
/*   Updated: 2019/12/09 15:16:13 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (s_len);
	while (--dstsize && *src != '\0')
	{
		*(dst++) = *(src++);
	}
	*(dst++) = '\0';
	return (s_len);
}
