/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:00:00 by pprates           #+#    #+#             */
/*   Updated: 2026/11/11 12:00:00 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	while (i < dstsize && dst[i])
		i++;
	len_dst = i;
	len_src = ft_strlen(src);
	if (len_dst == dstsize)
		return (dstsize + len_src);
	ft_strlcpy(&dst[i], src, dstsize - i);
	return (len_dst + len_src);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char dst[4] = "ola";
// 	const char src[6] = "mundo";
// 	char dst_orig[4] = "ola";
// 	const char src_orig[6] = "mundo";
// 	size_t res = ft_strlcat(dst, src, 5);
// 	size_t res_orig = strlcat(dst_orig, src_orig, 5);
// 	printf("ft: %zu | dst: %s\n", res, dst);
// 	printf("orig: %zu | dst: %s\n", res_orig, dst_orig);
// }