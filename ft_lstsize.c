#include "libft.h"

unsigned int    ft_lstsize(t_list *lst)
{
    unsigned int    i;

    i = 0;
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}

// #include <stdio.h>?
// int main()
// {
//     t_list *lst;
//     lst = NULL;
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("hello")));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("hello")));
//     ft_lstadd_front(&lst, ft_lstnew(ft_strdup("hello")));
//     printf("%d\n", ft_lstsize(lst));
// }