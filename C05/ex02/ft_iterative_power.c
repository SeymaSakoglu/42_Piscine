
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0 || nb == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_power(2,5));
	return(0);
}
