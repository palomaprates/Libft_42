/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:16:15 by pprates           #+#    #+#             */
/*   Updated: 2026/11/13 17:27:11 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	if (!s)
		return (NULL);
	size = (unsigned int)len;
	if (len > ft_strlen(s) - start)
		size = ft_strlen(s) - start;
	substr = malloc(size + 1);
	if (!substr)
		return (NULL);
	while (start <= ft_strlen(s) && i < size && s[i])
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>
// int	main()
// {
// 	// char s[5] = "hello";
// 	// unsigned int start = 0;
// 	// size_t len = 42000;
// 	char *res = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
// 	printf("%s\n", res);
// 	free(res);
// }