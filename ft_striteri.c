/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:04:40 by pprates           #+#    #+#             */
/*   Updated: 2026/11/05 14:51:16 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = malloc(ft_strlen(s));
	if (!str)
		return (NULL);
	while (s[i])
	{
		f(i, str);
		i++;
	}
	return (str);
}
