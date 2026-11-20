/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:06:51 by pprates           #+#    #+#             */
/*   Updated: 2026/11/20 12:59:08 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len2 == SIZE_MAX || len1 > SIZE_MAX - len2 - 1)
		return (NULL);
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len1 + 1);
	ft_strlcpy(&str[ft_strlen(s1)], s2, len2 + 1);
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