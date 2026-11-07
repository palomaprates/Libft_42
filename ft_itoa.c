/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:08:12 by pprates           #+#    #+#             */
/*   Updated: 2026/11/07 10:57:52 by palomaprate      ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;
	int		is_negative;

	nb = n;
	is_negative = 0;
	i = count_digits(nb);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
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

// #include <stdio.h>
// int	main()
// {
// 	char *res = ft_itoa(100000);
// 	printf("%s\n", res);
// }