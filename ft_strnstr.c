/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:52:43 by pprates           #+#    #+#             */
/*   Updated: 2026/10/30 14:23:19 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//************************** */ INCOMPLETA ***********************************************
static int	is_str_equal(const char *big, const char *little, size_t len, size_t i)
{
	size_t	j;

	j = 0;
	while (i < len)
	{
		if (little[j] == big[i])
			j++;
		i++;
	}
	if (ft_strlen(little) == j)
		return (1);
	return (0);
}
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (big[i])
	{
		if (is_str_equal(big, little, len, i))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	const char big[] = "hello, world";
// 	const char little[] = "world!!!";
// 	size_t len = 3;
// 	char *res = ft_strnstr(big, little, len);
// 	// char *res_orig = strnstr(big, little, len);
// 	printf("ft: %s\n", res);
// 	// printf("orig: %s\n", res_orig);
// }