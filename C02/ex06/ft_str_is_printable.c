int ft_str_is_printable(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if ((32 <= str[i]) && (str[i] <= 127))
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
    char src1[] = "asdd8790ad9jd.ASD";

	printf("%d", ft_str_is_printable(src1));
	return (0);
}