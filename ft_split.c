/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tajavon <tajavon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:02:27 by tajavon           #+#    #+#             */
/*   Updated: 2023/11/10 11:52:59 by tajavon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1, int start, int end)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (start + i < end)
	{
		s2[i] = s1[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int	count_split(char const *str, char c)
{
	int		i;
	int		count;
	int		is_word;

	i = 0;
	count = 0;
	is_word = 0;
	while (str[i])
	{
		if (str[i] == (const char)c)
		{
			if (is_word == 1)
			{
				count++;
				is_word = 0;
			}
		}
		else
			is_word = 1;
		i++;
	}
	if (is_word)
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	int		start;
	char	**tab;

	i = -1;
	j = 0;
	start = -1;
	tab = malloc((count_split(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (i++, s[i])
	{
		if (s[i] != (const char)c && start == -1)
			start = i;
		else if (s[i] == (const char)c && start != -1)
		{
			tab[j++] = &ft_strdup(s, start, i)[0];
			start = -1;
		}
	}
	if (start != -1)
		tab[j++] = &ft_strdup(s, start, i)[0];
	tab[j] = NULL;
	return (tab);
}

// int		c_strlen(char *str)
// {
// 	int len;

// 	len = 0;
// 	while (str[len])
// 		len++;
// 	return (len);
// }

// int		c_strctn(char *str1, char *str2, int at)
// {
// 	int	len;
// 	int	i;

// 	len = c_strlen(str2);
// 	i = 0;
// 	while (i < len)
// 	{
// 		str1[at + i] = str2[i];
// 		i++;
// 	}
// 	str1[at + i] = 0;
// 	return (len + at);
// }

// char	*c_strautojoin(char **strs, char *sep)
// {
// 	char	*str;
// 	int		len;
// 	int		seplen;
// 	int		i;
// 	int		j;

// 	len = 1;
// 	seplen = c_strlen(sep);
// 	i = 0;
// 	while (strs[i] != NULL)
// 	{
// 		len += c_strlen(strs[i]);
// 		if (strs[i + 1] != NULL)
// 			len += seplen;
// 		i++;
// 	}
// 	str = malloc(len * sizeof(char));
// 	i = 0;
// 	j = 0;
// 	while (strs[j])
// 	{
// 		i = c_strctn(str, strs[j++], i);
// 		if (strs[j])
// 			i = c_strctn(str, sep, i);
// 	}
// 	return (str);
// }

// int		main(void)
// {
// 	char **tab;

// 	tab = ft_split("Ceci#est#un#########succes#!", '#');
// 	printf("%s\n", c_strautojoin(tab, " "));
// 	tab = ft_split("Success", 'C');
// 	printf("%s\n", c_strautojoin(tab, " "));
// 	tab = ft_split("Success", 'n');
// 	printf("%s\n", c_strautojoin(tab, " "));
// 	tab = ft_split("", ' ');
// 	printf("OK\n");
// 	tab = ft_split("", 'C');
// 	printf("OK\n");
// 	tab = ft_split("       ", ' ');
// 	printf("OK\n");
// 	tab = ft_split("         ", ' ');
// 	printf("OK\n");
// }
