#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
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