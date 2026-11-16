/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:00:00 by pprates           #+#    #+#             */
/*   Updated: 2026/11/15 13:26:20 by palomaprate      ###   ########.fr       */
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
	if ((uintptr_t)dst < (uintptr_t)s)
	{
		i = 0;
		while (i < n)
		{
			dst[i] = s[i];
			i++;
		}
	}
	else
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