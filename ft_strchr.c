/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:22:27 by pprates           #+#    #+#             */
/*   Updated: 2026/11/19 17:32:35 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
// #include <string.h>
// int main()
// {
// 	const char str[5] = "h";
// 	int c = 'e';
// 	char *res = ft_strchr(str, c);
// 	char *res_ori = strchr(str, c);
// 	printf("ft: %s\n", res);
// 	printf("orig: %s\n", res_ori);
// }