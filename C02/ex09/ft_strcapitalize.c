/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:03:35 by ssakoglu          #+#    #+#             */
/*   Updated: 2025/11/25 13:03:35 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_alphanumeric(char str)
{
	return (('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z')
		|| ('0' <= str && str <= '9'));
}

char	ft_strupcase(char str)
{
	if ('a' <= str && str <= 'z')
		str -= 32;
	return (str);
}

char	ft_strlowcase(char str)
{
	if ('A' <= str && str <= 'Z')
		str += 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1;
	while (str[i] != '\0')
	{
		if (!(ft_alphanumeric(str[i])))
			start = 1;
		else
		{
			if (start == 1)
				str[i] = ft_strupcase(str[i]);
			if (start == 0)
				str[i] = ft_strlowcase(str[i]);
			start = 0;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
