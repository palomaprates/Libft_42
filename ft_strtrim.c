/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:46:08 by pprates           #+#    #+#             */
/*   Updated: 2026/11/13 15:52:18 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contain_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	get_init_index(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (contain_set(s1[i], set))
		i++;
	return (i);
}

static int	get_final_index(char const *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1) - 1;
	while (len >= 0 && contain_set(s1[len], set))
		len--;
	return (len);
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	int		i;
	int		len;

	if (!s1 || !set)
		return (NULL);
	i = get_init_index(s1, set);
	len = get_final_index(s1, set);
	if (i > len)
		return (ft_strdup(""));
	strtrim = ft_strndup(&s1[i], len - i + 1);
	return (strtrim);
}

// #include <stdio.h>
// int	main()
// {
// 	char s1[] = "haffellaffo";
// 	char set[] = "aff";
// 	char *trim = ft_strtrim(s1, set);
// 	printf("%s\n", trim);
// }