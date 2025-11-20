
int    ft_alphanumeric(char c)
{
    return (('a' <= c) && (c <= 'z')) || (('A' <= c) && (c <= 'Z')) || (('0' <= c) && (c <= '9'));
} 

int	ft_numeric(char c)
{
    return (('0' <= c) && (c <= '9'));
}

char ft_to_up(char c)
{
    if (('a' <= c) && (c <= 'z'))
    {
        return (c - 32);
    }
    return (c);
}

char ft_to_low(char c)
{
    if (('A' <= c) && (c <= 'Z'))
    {
        return (c + 32);
    }
    return (c);
}

char    *ft_strupcase(char *str)
{
    int kelime_basi;
    int i;

    i = 0;
    kelime_basi = 1;
    while (str[i] != '\0')
    {
        if (!(ft_alphanumeric(str[i])))
            kelime_basi = 1;
        else if (ft_numeric(str[i]))
            kelime_basi = 0;
        else if (kelime_basi == 1)
        {
            str[i] = ft_to_up(str[i]);
            kelime_basi = 0;
        }
        else
        {
            str[i] =ft_to_low(str[i]);
            kelime_basi = 0;
        }
        i++;
    }
    return (str);
}

#include<stdio.h>

int main()
{
    char src1[] = "dEnEmE_YAzi2,9dOkuz";

	printf("%s", ft_strupcase(src1));
	return (0);
}