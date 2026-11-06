/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:19:32 by pprates           #+#    #+#             */
/*   Updated: 2026/11/06 10:51:13 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

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