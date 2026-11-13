/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:00:15 by pprates           #+#    #+#             */
/*   Updated: 2026/11/13 16:25:05 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
// #include <stdio.h>
// int	main()
// {
// 	t_list	*lst;
//     lst = NULL;
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("jesus")));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("jesu")));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("jes")));
//     t_list *last = ft_lstlast(lst); 
//     printf("last: %s\n", (char *)last->content);
// }