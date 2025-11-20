 char   *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
	return (dest); 
}

#include<stdio.h>

int main()
{
	char src1[] = "merhaba";
	char dest2[20];

	printf("%s", ft_strncpy(dest2, src1, 10));
	return (0);
}
