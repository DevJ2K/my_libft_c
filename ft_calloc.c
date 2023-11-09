/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tajavon <tajavon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:39:13 by tajavon           #+#    #+#             */
/*   Updated: 2023/11/07 15:53:25 by tajavon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cpy;
	size_t			i;

	i = 0;
	cpy = s;
	while (i < n)
	{
		cpy[i] = c;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;
	size_t	total_size;

	total_size = nmemb * size;
	if (size != 0 && total_size / size != nmemb)
		return (NULL);
	memory = malloc(total_size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, total_size);
	return (memory);
}
