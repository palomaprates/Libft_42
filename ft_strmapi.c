/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:00:26 by pprates           #+#    #+#             */
/*   Updated: 2026/11/13 17:15:05 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	test(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		c = 'X';
// 	return (c);
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		if (!str[i])
			break ;
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main()
// {
//     char s[] = "hello";
//     char *res = ft_strmapi(s, test);
// 	printf("%s\n", res);
// }