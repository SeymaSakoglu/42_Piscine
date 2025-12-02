/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 00:14:19 by ssakoglu          #+#    #+#             */
/*   Updated: 2025/11/27 13:57:17 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		num;
	long int	nb1;

	nb1 = nb;
	if (nb1 < 0)
	{
		write(1, "-", 1);
		nb1 = -nb1;
	}
	if (nb1 > 9)
		ft_putnbr(nb1 / 10);
	num = (nb1 % 10) + '0';
	write(1, &num, 1);
}
