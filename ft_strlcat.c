/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:22:38 by pprates           #+#    #+#             */
/*   Updated: 2026/11/11 14:20:20 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst > dstsize)
		return (dstsize + len_src);
	while (i < dstsize && dst[i])
		i++;
	ft_strlcpy(&dst[i], src, dstsize - i);
	return (len_dst + len_src);
}

// int	main()
// {
// 	char dst[200] = "hello, ";
// 	const char src[6] = "world!";
// 	char dst_orig[200] = "hello, ";
// 	const char src_orig[6] = "world!";
// 	size_t	dst_size = 4;
// 	size_t res = ft_strlcat(dst, src, dst_size);
// 	size_t res_orig = strlcat(dst_orig, src_orig, dst_size);
// 	printf("ft: %zu\n", res);
// 	printf("orig: %zu\n", res_orig);
// }