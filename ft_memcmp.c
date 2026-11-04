/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:45:50 by pprates           #+#    #+#             */
/*   Updated: 2026/11/03 14:04:12 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	int			cmp;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	cmp = ft_strncmp(str1, str2, n);
	return (cmp);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	int n = 100;
// 	const char str1[] = "aab";
// 	const char str2[] = "aaa";
// 	int res = ft_memcmp(str1, str2, n);
// 	int res_orig = memcmp(str1, str2, n);
// 	printf("ft: %d\n", res);
// 	printf("orig %d\n", res_orig);
// }