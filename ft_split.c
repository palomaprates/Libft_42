/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:56:12 by pprates           #+#    #+#             */
/*   Updated: 2026/11/05 16:57:00 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
		while (s[i] == c)
			i++;
			words++;
		} 
		i++;
	}
	return (words);
}

static int word_len(char const *s, char c)
{
	int	 i;
	int	 len;

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

static int  separator_len(char const *s, char c)
{
	int i;

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
	int	 i;
	int	 wl;
	int	 j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
	return (NULL);
	while (i < count_words(s, c))
	{
	wl = word_len(&s[j], c);
	arr[i] = ft_strndup(&s[j + separator_len(&s[j], c)], wl);
	j = j + wl + separator_len(&s[j], c);
	i++;
	}
	arr[i] = NULL;
	return (arr);
}
 
// #include <stdio.h>
// int main()
// {
//     char s[] = "ahelloaaaaaworld";
//     char **arr = ft_split(s, 'a');
//     int i = 0;
//     while (i < count_words(s, 'a'))
//     {
//         printf("%s\n", arr[i]);
//         i++;
//     }
// }