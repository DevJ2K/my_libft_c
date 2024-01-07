/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tajavon <tajavon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:13:48 by tajavon           #+#    #+#             */
/*   Updated: 2024/01/07 22:11:33 by tajavon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief The ft_strncat() function append a copy of the null-terminated
/// string src to the end of the null-terminated string dest, then add
/// a terminating ‘\0’.  The string dest must have sufficient space
/// to hold the result. The ft_strncat() function appends not more than
/// nb characters from src, and then adds a terminating ‘\0’.
/// @param dest The destination of the concatenation.
/// @param src The source string.
/// @param nb The nb char you wants to add from src
/// @return The strncat() functions return the pointer dest.
char	*ft_strncat(char *dest, char *src, size_t nb)
{
	size_t	end_dest;
	size_t	i;

	i = 0;
	end_dest = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[end_dest + i] = src[i];
		i++;
	}
	dest[end_dest + i] = '\0';
	return (dest);
}
