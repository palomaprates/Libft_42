/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:08:12 by pprates           #+#    #+#             */
/*   Updated: 2026/11/10 11:51:50 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long nb)
{
	int	counter;

	counter = 0;
	if (nb <= 0)
		counter++;
	while (nb)
	{
		counter++;
		nb = nb / 10;
	}
	return (counter);
}

static char	*int_to_char(char *str, long nb, int i)
{
	int		is_negative;

	is_negative = 0;
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb;
	}
	str[i] = '\0';
	i--;
	if (nb == 0)
	{
		str[i] = '0';
		i--;
	}
	while (nb)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	nb = n;
	i = count_digits(nb);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	return (int_to_char(str, nb, i));
}

// #include <stdio.h>
// int	main()
// {
// 	char *res = ft_itoa(100000);
// 	printf("%s\n", res);
// }