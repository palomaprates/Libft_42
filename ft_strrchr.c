#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while(i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// #include <string.h>
// int main()
// {
// 	const char str[8] = "heeello";
// 	int c = 'e';
// 	char *res = ft_strrchr(str, c);
// 	char *res_ori = strrchr(str, c);
// 	printf("ft: %s\n", res);
// 	printf("orig: %s\n", res_ori);
// }