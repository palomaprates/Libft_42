/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 14:40:42 by pprates           #+#    #+#             */
/*   Updated: 2026/11/05 09:43:29 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

    if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size * nmemb);
	return (mem);
}

// #include <stdio.h>
// int main()
// {
//     int *res = ft_calloc(5, sizeof(int));
//     int *res_ori = calloc(5, sizeof(int));
//     int i = 0;
//     while (i < 5)
//     {
//         printf("ft: %d\n", res[i]);
//         i++;
//     }
//     i = 0;
//      while (i < 5)
//     {
//         printf("ori: %d\n", res_ori[i]);
//         i++;
//     }
//     free(res);
//     free(res_ori);
// }