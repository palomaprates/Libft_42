/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:00:15 by pprates           #+#    #+#             */
/*   Updated: 2026/11/20 12:29:42 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
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