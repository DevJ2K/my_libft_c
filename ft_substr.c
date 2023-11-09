/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tajavon <tajavon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:39:05 by tajavon           #+#    #+#             */
/*   Updated: 2023/11/09 12:55:21 by tajavon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	max_len;
	char	*sub;

	i = -1;
	if (start >= ft_strlen(s))
	{
		sub = malloc(sizeof(char));
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	max_len = ft_strlen(s) - start;
	if (max_len > len)
		max_len = len;
	sub = malloc((max_len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i++, i < max_len)
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}
