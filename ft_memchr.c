/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:31:17 by pprates           #+#    #+#             */
/*   Updated: 2026/10/30 12:44:00 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c_temp;
	size_t			i;

	str = (unsigned char *)s;
	c_temp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c_temp)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	int n = 1;
// 	const char str[5] = "hello";
// 	int c = 'e';
// 	char *res = ft_memchr(str, c, n);
// 	char *res_ori = memchr(str, c, n);
// 	printf("ft: %s\n", res);
// 	printf("orig: %s\n", res_ori);
// }