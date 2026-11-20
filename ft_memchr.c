/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:31:17 by pprates           #+#    #+#             */
/*   Updated: 2026/11/20 12:59:38 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		c_temp;
	size_t				i;

	str = (const unsigned char *)s;
	c_temp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c_temp)
			return ((void *)&str[i]);
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