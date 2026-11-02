/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 14:40:42 by pprates           #+#    #+#             */
/*   Updated: 2026/11/02 18:56:54 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void    *mem;
    if (nmemb != 0 && size > SIZE_MAX / nmemb)
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
//     int *res= ft_calloc(5, sizeof(int));
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