#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
// #include <string.h>
// int main()
// {
// 	const char str[5] = "h";
// 	int c = 'e';
// 	char *res = ft_strchr(str, c);
// 	char *res_ori = strchr(str, c);
// 	printf("ft: %s\n", res);
// 	printf("orig: %s\n", res_ori);
// }