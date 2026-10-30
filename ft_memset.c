/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:41:22 by pprates           #+#    #+#             */
/*   Updated: 2026/10/28 14:56:57 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	int n = 3;
// 	unsigned char str[9];
// 	unsigned char str_orig[9];
// 	int c = 'a';
// 	ft_memset(str, c, n);
// 	memset(str_orig, c, n);
// 	printf("%s\n", str);
// 	printf("%s\n", str_orig);
// }