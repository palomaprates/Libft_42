/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:19:32 by pprates           #+#    #+#             */
/*   Updated: 2026/11/04 15:44:49 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *s1, char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(size);
	if (!str)
		return (NULL);
	str = ft_strcat((char *)s1, (char *)s2);
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "world";
// 	char *str = ft_strjoin(s1, s2);
// 	printf("%s\n", str);
// }