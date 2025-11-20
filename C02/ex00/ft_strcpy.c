char    *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest); 
	
}

#include<stdio.h>

int main()
{
	char src1[] = "merhaba";
	char dest2[20];

	printf("%s", ft_strcpy(dest2, src1));
	return (0);
}
