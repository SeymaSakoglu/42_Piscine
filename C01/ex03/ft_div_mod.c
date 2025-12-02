/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 04:13:38 by ssakoglu          #+#    #+#             */
/*   Updated: 2025/11/16 18:59:33 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int main()
{
    int x = 15;
    int y = 6;
    int div;
    int mod;

    ft_div_mod(x, y, &div, &mod);
    printf("div : %d\nmod : %d",div ,mod);
}
