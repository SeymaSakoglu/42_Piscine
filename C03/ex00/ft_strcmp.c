
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

#include<stdio.h>

int main ()
{
    char *str1 = "abcD";
    char *str2 = "abcd";
    printf("%d", ft_strcmp(str1, str2));
}