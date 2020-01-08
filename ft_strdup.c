/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:33:00 by egallego          #+#    #+#             */
/*   Updated: 2020/01/08 15:43:45 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*aux;

	aux = malloc(ft_strlen(s1) + 1);
	if (!aux)
		return (NULL);
	return (ft_memcpy(aux, s1, ft_strlen(s1) + 1));
}
