int	ft_str_is_numeric(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (('0' <= str[i]) && (str[i] <= '9'))
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
	char src1[] = "132df3";

	printf("%d", ft_str_is_numeric(src1));
	return (0);
}