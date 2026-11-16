#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	// const char str[8] = "heeello";
// 	int c = 'e';
// 	char *res = ft_strrchr(NULL, c);
// 	char *res_ori = strrchr(NULL, c);
// 	printf("ft: %s\n", res);
// 	printf("orig: %s\n", res_ori);
// }