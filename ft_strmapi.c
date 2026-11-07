/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:00:26 by pprates           #+#    #+#             */
/*   Updated: 2026/11/07 11:22:02 by palomaprate      ###   ########.fr       */
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
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
//     char s[] = "hello";
//     char *res = ft_strmapi(s, test);
// 	printf("%s\n", res);
// }