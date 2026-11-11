/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:00:00 by pprates           #+#    #+#             */
/*   Updated: 2026/11/11 12:00:00 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
//     t_list *lst;
//     lst = NULL;
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("hello")));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("hello")));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("hello")));
//     printf("%d\n", ft_lstsize(lst));
// }