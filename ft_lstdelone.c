#include "libft.h"

// void	del_node(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	*lst;
//     lst = NULL;
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("jesus")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("jesu")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("jes")));
// 	ft_lstdelone(lst, del_node);
// 	// printf("del: %s\n", (char *)lst);
// }