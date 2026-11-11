/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:00:00 by pprates           #+#    #+#             */
/*   Updated: 2026/11/11 12:00:00 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*s;
	size_t				i;

	if (n == 0 || dest == src)
		return (dest);
	dst = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dst < s)
	{
		i = 0;
		while (i < n)
		{
			dst[i] = s[i];
			i++;
		}
	}
	else if (dst > s)
	{
		i = n;
		while (i-- > 0)
			dst[i] = s[i];
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     unsigned char src[6] = "hello";
//     unsigned char src_orig[6] = "hello";
//     unsigned char dest[20];
//     unsigned char dest_orig[20];
//     int n = 3;
//     ft_memmove(dest, src, n);
//     memmove(dest_orig, src_orig, n);
//     printf("ft %s\n", dest);
//     printf("memmove %s\n", dest_orig);
// }