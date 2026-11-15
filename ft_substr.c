#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
// #include <stdio.h>
// int	main()
// {
// 	// char s[5] = "hello";
// 	// unsigned int start = 0;
// 	// size_t len = 42000;
// 	char *res = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
// 	printf("%s\n", res);
// 	free(res);
// }