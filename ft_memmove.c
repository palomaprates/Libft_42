/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:02:35 by pprates           #+#    #+#             */
/*   Updated: 2026/11/11 16:18:43 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*s;
	size_t			i;

	dst = (unsigned char *)dest;
	s = (unsigned char *)src;
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
		while (i > 0)
		{
			i--;
			dst[i] = s[i];
		}
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