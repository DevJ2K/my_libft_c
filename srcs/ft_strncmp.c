/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tajavon <tajavon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:43:31 by tajavon           #+#    #+#             */
/*   Updated: 2024/01/07 22:15:51 by tajavon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

/// @brief ft_strncmp() functions lexicographically compare the
/// null-terminated strings s1 and s2. The ft_strncmp() function
/// compares not more than n characters
/// @param s1 The first string to compare.
/// @param s2 The second string to compare.
/// @param n The number of characters you wants to compare.
/// @return The ft_strncmp() functions return an integer greater than,
/// equal to, or less than 0, according as the string s1 is greater
/// than, equal to, or less than the string s2.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char phrase1[] = "test\200";
// 	const char phrase2[] = "test\0";
// 	printf("REAL : %d\n", strncmp(phrase1, phrase2, 100));
// 	printf("MINE : %d\n", ft_strncmp(phrase1, phrase2, 100));
// }
