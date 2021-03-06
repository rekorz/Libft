/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 17:28:31 by egallego          #+#    #+#             */
/*   Updated: 2020/01/08 18:22:30 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	n;
	char	*ptr;

	n = (ft_strlen(s) + 1);
	ptr = (char *)s;
	while (n--)
	{
		if (ptr[n] == (unsigned char)c)
			return (&ptr[n]);
	}
	return (NULL);
}
