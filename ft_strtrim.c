/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:46:08 by pprates           #+#    #+#             */
/*   Updated: 2026/11/04 17:13:31 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		contain_set(char c, char const *set)
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

int	len_no_set(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (!contain_set(s1[i], set))
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strtrim = malloc(len_no_set(s1, set));
	if (!strtrim)
		return (NULL);
	while (s1[i])
	{
		if (!contain_set(s1[i], set))
		{
			strtrim[j] = s1[i];
			j++;
		}
		i++;
	}
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