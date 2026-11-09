#include "libft.h"

// void	del_node(void *content)
// {
// 	free(content);
// }

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *aux;

    if (!*lst)
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