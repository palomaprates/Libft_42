/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:06:51 by pprates           #+#    #+#             */
/*   Updated: 2026/11/13 17:21:54 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&str[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
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