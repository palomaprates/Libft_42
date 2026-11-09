#include "libft.h"

// static void	del_node(void *content)
// {
// 	free(content);
// }

// static void *ft_toupper2(void *s)
// {
//    char	*str;
// 	int		i;

// 	str = ft_strdup((char *)s);
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 			str[i] -= 32;
// 		i++;
// 	}
// 	return (str);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new_lst;
// 	t_list	*temp;

// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("aloooo")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("alo")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("oiioio")));

// 	new_lst = ft_lstmap(lst, ft_toupper2, del_node);
// 	temp = new_lst;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&lst, del_node);
// 	ft_lstclear(&new_lst, del_node);
// 	return (0);
// }