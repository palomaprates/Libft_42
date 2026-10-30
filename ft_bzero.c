/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:58:02 by pprates           #+#    #+#             */
/*   Updated: 2026/10/28 15:13:14 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	int n = 2;
// 	char str[6] = "hello";
// 	char str_orig[] = "hello";
// 	ft_bzero(str, n);
// 	printf("ft: %s\n", str);
// 	bzero(str_orig, n);
// 	printf("bzero: %s\n", str_orig);
// }