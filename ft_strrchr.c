/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egallego <egallego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 17:28:31 by egallego          #+#    #+#             */
/*   Updated: 2019/12/20 19:06:01 by egallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrchr(const char *s, int c)
{
	char	*auxptr;
	char	*string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	string = (char*)s;
	while (string[i] != '\0')
	{
		if ((char)c == string[i])
		{
			auxptr = (char*)&string[i];
			j++;
		}
		i++;
	}
	if (j != 0)
		return (auxptr);
	else
		return (&string[i]);
}
