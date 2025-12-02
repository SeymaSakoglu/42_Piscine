/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 04:32:28 by ssakoglu          #+#    #+#             */
/*   Updated: 2025/11/17 11:42:02 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = (*a / *b);
	y = (*a % *b);
	*a = x;
	*b = y;
}

int	main(void)
{
	int		p;
	int		z;
	char	d[7];

	p = 23;
	z = 3;

    printf("p : %d z : %d\n", p, z);
	ft_ultimate_div_mod(&p, &z);
    printf("p : %d z : %d", p, z);
    /*
    d[0] = 'a';
    d[1] = ':';
	d[2] = p + '0';
	d[3] = '\n';
    d[4] = 'b';
    d[5] = ':';
	d[6] = z + '0';
	write(1, d, 7);
    */
	return (0);
}
