 #include "libft.h"

int is_str_equal(char *big, char *little, size_t i)
{
    size_t j = 0;
    size_t equal = 0;
    while (little[j])
    {
        if (big[i] == little[j])
        {
            i++;
            equal++;
        }
        j++;
    }
    if (ft_strlen(little) == equal)
        return (1);
    return (0);
}

char *ft_strnstr1(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    
    if (!little[i])
        return (big);
    while (big[i] && i < len)
    {
        if (is_str_equal(big, little, i))
            return(&big[i]);
        i++;
    }
    return (NULL);
  }
#include <stdio.h>
// #include <string.
  int   main()
  {
    char big[] = "heworld hello";
    const char little[] = "wor";
    char *str = ft_strnstr1(big, little, 5);
    // char *str1 = strnstr(big, little, 5);
    printf("ft: %s\n", str);
    // printf("orig: %s\n", str1);
  }