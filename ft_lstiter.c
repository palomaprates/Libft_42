/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:59:13 by pprates           #+#    #+#             */
/*   Updated: 2026/11/13 17:21:34 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_islower(int c)
// {
// 	return (c >= 'a' && c <= 'z');
// }

// static void ft_toupper2(void *s)
// {
//     char *str;
//     int i;

//     str = (char *)s;
//     i = 0;
//     while (str[i])
//     {
//         if (ft_islower(str[i]))
//             str[i] = str[i] - 32;
//         i++;
//     }
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	*lst;
//     lst = NULL;
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("alo")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("aloooo")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("oi")));
// 	ft_lstiter(lst, ft_toupper2);
//     while (lst)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
// }