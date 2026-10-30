#include <stdio.h>
#include <string.h>
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	while (i < dstsize && dst[i])
		i++;
	if (dstsize <= i)
		return (dstsize + len_src);
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

// int	main()
// {
// 	char dst[200] = "hello, ";
// 	const char src[6] = "world!";
// 	char dst_orig[200] = "hello, ";
// 	const char src_orig[6] = "world!";
// 	size_t	dst_size = 4;
// 	size_t res = ft_strlcat(dst, src, dst_size);
// 	size_t res_orig = strlcat(dst_orig, src_orig, dst_size);
// 	printf("ft: %zu\n", res);
// 	printf("orig: %zu\n", res_orig);
// }