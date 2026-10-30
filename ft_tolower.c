static int	is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_tolower(int c)
{
	if (!is_lower(c))
		c = c + 32;
	return (c);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%c\n", ft_tolower('a'));
// }