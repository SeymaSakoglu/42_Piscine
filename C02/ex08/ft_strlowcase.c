char    *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (('a' <= str[i]) && (str[i] <= 'z'))
            i++;
        if (('A' <= str[i]) && (str[i] <= 'Z'))
            str[i] = str[i] + 32;
            i++;
    }
    return (str);
}

#include<stdio.h>

int main()
{
    char src1[] = "AsjdsFTg2372";

	printf("%s", ft_strlowcase(src1));
	return (0);
}