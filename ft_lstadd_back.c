/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palomaprates <palomaprates@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:53:06 by pprates           #+#    #+#             */
/*   Updated: 2026/11/20 12:25:42 by palomaprate      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	*lst;
//     lst = NULL;
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("jesus")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("jesu")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("jes")));
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }