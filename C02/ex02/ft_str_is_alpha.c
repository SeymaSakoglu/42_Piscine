int    ft_str_is_alpha(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (('a' <= str[i]) && (str[i] <= 'z'))
            i++;
        else if (('A' <= str[i]) && (str[i] <= 'Z'))
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
	char src1[] = "ADGipt";

	printf("%d", ft_str_is_alpha(src1));
	return (0);
}