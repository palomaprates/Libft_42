/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:08:12 by pprates           #+#    #+#             */
/*   Updated: 2026/11/05 14:49:13 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	counter;

	counter = 0;
	while (n)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(count_digits(n) + 1);
	if (!str)
		return (NULL);
	while (n)
	{
		str[i] = n % 10 + '0';
		i++;
		n = n / 10;
	}
	i--;
	while (i > 0)
	{
		str[j] = str[i];
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}
// #include <stdio.h>
// int	main()
// {
// 	char *res = ft_itoa(100000);
// 	printf("%s\n", res);
// }