
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == '\0')
		return (0);
	else
	{
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
	}
	return (nb);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(5));
	return(0);
}
