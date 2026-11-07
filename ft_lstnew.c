#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>
// int	main()
// {
// 	t_list	*lst;
// 	lst = ft_lstnew(ft_strdup("oi"));
// 	lst->next = ft_lstnew(ft_strdup("alo"));
// 	lst->next->next = ft_lstnew(ft_strdup("aaaaaa"));
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }