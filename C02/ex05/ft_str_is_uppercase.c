int ft_str_is_lowercase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (('A' <= str[i]) && (str[i] <= 'Z'))
            i++;
        else 
            return (0);

    }
    if (str[i] == '\0')
        return (1);
}

#include<stdio.h>

int main()
{
	char src1[] = "AASD";

	printf("%d", ft_str_is_lowercase(src1));
	return (0);
}