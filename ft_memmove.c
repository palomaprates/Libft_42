/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:02:35 by pprates           #+#    #+#             */
/*   Updated: 2026/11/10 12:02:36 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*s;

	dst = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dst < s)
	{
		while (n--)
			*dst++ = *s++;
	}
	else if (dst > s)
	{
		dst += n;
		s += n;
		while (n--)
			*--dst = *--s;
	}
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
//     ft_memmove(dest, src, n);
//     memmove(dest_orig, src_orig, n);
//     printf("ft %s\n", dest);
//     printf("memmove %s\n", dest_orig);
// }