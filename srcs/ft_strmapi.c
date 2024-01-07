/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tajavon <tajavon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:54:54 by tajavon           #+#    #+#             */
/*   Updated: 2024/01/07 20:45:15 by tajavon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Applies the function ’f’ to each character of the
/// string ’s’, and passing its index as first argument
/// to create a new string (with malloc(3)) resulting
/// from successive applications of ’f’.
/// @param s The string on which to iterate.
/// @param f The function to apply to each character.
/// @return The string created from the successive applications of ’f’.
/// Returns NULL if the allocation fails.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mapstr;

	if (!s)
		return (NULL);
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
