/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:06:10 by ssakoglu          #+#    #+#             */
/*   Updated: 2025/11/17 11:59:46 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
        str++;
		n++;
	}
	return (n);
}

int	main(void)
{
	char	*str1;
    int len;

	str1 = "merhaba";
	len = ft_strlen(str1);
    printf("len = %d", len);
	return (0);
}
