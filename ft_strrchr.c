/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:23:45 by pprates           #+#    #+#             */
/*   Updated: 2026/11/02 17:03:29 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// #include <string.h>
// int main()
// {
// 	const char str[8] = "heeello";
// 	int c = 'e';
// 	char *res = ft_strrchr(str, c);
// 	char *res_ori = strrchr(str, c);
// 	printf("ft: %s\n", res);
// 	printf("orig: %s\n", res_ori);
// }