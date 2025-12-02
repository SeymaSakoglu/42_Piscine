/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 23:01:39 by ssakoglu          #+#    #+#             */
/*   Updated: 2025/11/17 14:43:19 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	char arr[2];

	int a = 15;
	int *n1 = &a;
	int **n2 = &n1;
	int ***n3 = &n2;
	int ****n4 = &n3;
	int *****n5 = &n4;
	int ******n6 = &n5;
	int *******n7 = &n6;
	int ********n8 = &n7;
	int *********n9 = &n8;

	ft_ultimate_ft(n9);
	arr[0] = (a / 10) + '0';
	arr[1] = (a % 10) + '0';
	write(1, arr, 2);
}
