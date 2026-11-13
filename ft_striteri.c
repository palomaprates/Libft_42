/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:04:40 by pprates           #+#    #+#             */
/*   Updated: 2026/11/13 16:26:54 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	test(unsigned int i, char *c)
// {
// 	while (c[i])
// 	{
// 		c[i] = 'X';
// 		i++;
// 	}
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// int	main()
// {
// 	char s[] = "hi";
// 	ft_striteri(s, test);
// 	printf("%s\n", s);
// }