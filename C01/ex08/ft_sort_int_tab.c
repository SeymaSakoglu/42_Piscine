/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:54:19 by ssakoglu          #+#    #+#             */
/*   Updated: 2025/11/16 21:06:12 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	max;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				max = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = max;
			}
			i++;
		}
		size--;
	}
}

int main()
{
	int i = 0;
	int arr[6] = {2,4,6,3,1,8};
	
	ft_sort_int_tab(arr, 6);
	while (i < 6)
	{
		printf("%d", arr[i]);
		i++;
	}
}
