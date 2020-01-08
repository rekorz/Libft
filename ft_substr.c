/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:44:15 by egallego          #+#    #+#             */
/*   Updated: 2020/01/08 17:17:52 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*str;

	if (!s || !(str = ft_calloc(len + 1, sizeof(*str))))
		return (NULL);
	if (ft_strlen(s) < (size_t)start)
		return (str);
	return ((char*)ft_memcpy(str, s + start, len));
}
