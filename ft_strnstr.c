/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 19:47:11 by egallego          #+#    #+#             */
/*   Updated: 2019/12/26 10:56:33 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;
	size_t	haystack_size;
	size_t	i;

	needle_size = ft_strlen(needle);
	if (!needle_size)
		return ((char*)haystack);
	i = 0;
	haystack_size = ft_strlen(haystack);
	while (len-- >= needle_size && (haystack_size - i) >= needle_size)
	{
		if (*(haystack + i) == *needle &&
				!ft_memcmp(haystack + i, needle, needle_size))
			return ((char*)haystack + i);
		++i;
	}
	return (NULL);
}
