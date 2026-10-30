/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:04:30 by pprates           #+#    #+#             */
/*   Updated: 2026/10/28 16:05:56 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     unsigned char src[5] = "hello";
//     unsigned char src_orig[5] = "hello";
//     unsigned char dest[20];
//     unsigned char dest_orig[20];
//     int n = 3;
//     ft_memcpy(dest, src, n);
//     memcpy(dest_orig, src_orig, n);
//     printf("ft %s\n", dest);
//     printf("memcpy %s\n", dest_orig);
// }