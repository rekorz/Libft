/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:33:41 by egallego          #+#    #+#             */
/*   Updated: 2019/12/09 18:42:00 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t h;
	size_t k;

	i = 0;
	j = 0;

	h = ft_strlen(src);
	k = ft_strlen(dst);
	if (dstsize > (h + k - 1))
		return (0);
	while (dst[i] != '\0')
	{
		i++;
	}
	i++;
	while (src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	i++;
	dst[i] = '\0';
	return (h + k);
}
