/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tajavon <tajavon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:54:54 by tajavon           #+#    #+#             */
/*   Updated: 2023/11/08 15:01:24 by tajavon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char const *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mapstr;

	i = 0;
	mapstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!mapstr)
		return (NULL);
	while (s[i])
	{
		mapstr[i] = f(i, s[i]);
		i++;
	}
	mapstr[i] = '\0';
	return (mapstr);
}
