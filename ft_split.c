/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:56:12 by pprates           #+#    #+#             */
/*   Updated: 2026/11/13 17:29:26 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static int	word_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static int	separator_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static char	*ft_strndup(const char *s, int len)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (s[i] && i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (i < count_words(s, c))
	{
		arr[i] = ft_strndup\
(&s[j + separator_len(&s[j], c)], word_len(&s[j], c));
		if (!arr[i])
		{
			while (i > 0)
				free(arr[--i]);
			free(arr);
			return (NULL);
		}
		j = j + word_len(&s[j], c) + separator_len(&s[j], c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
// #include <stdio.h>
// int main()
// {
//     char *s = NULL;
//     char **arr = ft_split(NULL, ' ');
//     int i = 0;
//     while (i < count_words(s, ' '))
//     {
//         printf("%s\n", arr[i]);
// 		free(arr[i]);
//         i++;
//     }
// 	free(arr);
// }