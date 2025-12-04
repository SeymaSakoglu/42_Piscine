
int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		while ((x * x) <= nb)
		{
			if (((nb / x) == x) && ((nb % x) == 0))
			{
				return (x);
			}
			x++;
		}
	return (0);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_sqrt(20));
	return(0);
}
