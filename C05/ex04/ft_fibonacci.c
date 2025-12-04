
int ft_fibonacci(int index)
{
	int	result;

	result = 1;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
}
// index  : 0 1 2 3 4 5
// result : 0 1 1 2 3 5
#include <stdio.h>

int main()
{
	printf("%d", ft_fibonacci(5));
	return(0);
}
