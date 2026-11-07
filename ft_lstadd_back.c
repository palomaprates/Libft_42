#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *temp;

    if (!*lst)
    {
        *lst = new;
        return ;
    }
    temp = *lst;
    while (temp && temp->next)
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