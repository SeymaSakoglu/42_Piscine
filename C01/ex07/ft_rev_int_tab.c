/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:09:33 by ssakoglu          #+#    #+#             */
/*   Updated: 2025/11/16 19:52:40 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
    int s = 0;
    int f = size -1;
    int temp;

	while (s < f)
	{
        temp = tab[s];
		tab[s] = tab[f];
        tab[f] = temp;
		s++;
        f--;
	}
}

int	main(void)
{
    int i = 0;

	int dizi[7] ={1, 2, 3, 4, 5, 6, 7};

	ft_rev_int_tab(dizi, 7);
    while(i < 7)
    {
        printf("%d", dizi[i]);
        i++;
    }
}
