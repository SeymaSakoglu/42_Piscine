char    *ft_strupcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (('a' <= str[i]) && (str[i] <= 'z'))
            str[i] = str[i] - 32;
            i++;
        if (('A' <= str[i]) && (str[i] <= 'Z'))
            i++;
    }
    if (str[i] == '\0')
    return (str);
}

#include<stdio.h>

int main()
{
    char src1[] = "asd";

	printf("%s", ft_strupcase(src1));
	return (0);
}