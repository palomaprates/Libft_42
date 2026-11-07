#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

// #include <stdio.h>
// int	main()
// {
// 	t_list	*lst;
//     lst = NULL;
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("jesus")));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("jesu")));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("jes")));
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }