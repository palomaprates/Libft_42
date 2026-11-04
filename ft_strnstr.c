/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:52:43 by pprates           #+#    #+#             */
/*   Updated: 2026/11/03 14:05:59 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_str_equal(const char *big, const char *little, size_t i, \
size_t len)
{
	size_t	j;

	j = 0;
	while (big[i] == little[j] && little[j] && i < len)
	{
		i++;
		j++;
	}
	if (j == ft_strlen(little))
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (is_str_equal(big, little, i, len))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	const char big[] = "hello, world";
// 	const char little[] = "world!!!";
// 	size_t len = 3;
// 	char *res = ft_strnstr(big, little, len);
// 	// char *res_orig = strnstr(big, little, len);
// 	printf("ft: %s\n", res);
// 	// printf("orig: %s\n", res_orig);
// }