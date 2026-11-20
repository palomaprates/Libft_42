/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:08:13 by pprates           #+#    #+#             */
/*   Updated: 2026/11/20 12:56:32 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		i--;
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	// const char str[8] = "heeello";
// 	int c = 'e';
// 	char *res = ft_strrchr(NULL, c);
// 	char *res_ori = strrchr(NULL, c);
// 	printf("ft: %s\n", res);
// 	printf("orig: %s\n", res_ori);
// }