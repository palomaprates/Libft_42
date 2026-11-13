/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates <pprates@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:56:47 by pprates           #+#    #+#             */
/*   Updated: 2026/11/13 16:55:05 by pprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del_node(void *content)
// {
// 	free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = aux;
	}
}
// #include <stdio.h>

// int	main()
// {
// 	t_list	*lst;
//     lst = NULL;
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("jesus")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("jesu")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("jes")));
// 	ft_lstclear(&lst, del_node);
// 	printf("del: %s\n", (char *)lst);
// }