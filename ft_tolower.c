/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:23:51 by pprates           #+#    #+#             */
/*   Updated: 2026/10/30 12:23:52 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_tolower(int c)
{
	if (!is_lower(c))
		c = c + 32;
	return (c);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%c\n", ft_tolower('a'));
// }