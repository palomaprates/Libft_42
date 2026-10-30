/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:40:46 by pprates           #+#    #+#             */
/*   Updated: 2026/10/28 13:42:54 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
// #include <stdio.h> 
// #include <ctype.h>
// int	main()
// {
// 	printf("ft: %d\n", ft_isdigit('p'));
// 	printf("original: %d\n", isdigit('p'));
// }