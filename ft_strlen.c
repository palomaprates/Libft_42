/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:11:43 by pprates           #+#    #+#             */
/*   Updated: 2026/11/20 12:51:07 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	printf("ft: %d\n", ft_strlen("hello"));
// 	printf("original: %lu\n", strlen("hello"));
// }