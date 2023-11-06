/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:29:35 by ruiolive          #+#    #+#             */
/*   Updated: 2023/08/30 13:17:24 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(char src)
{
	char	hex[2];

	hex[0] = (src / 16) + '0';
	hex[1] = src % 16;
	if (hex[1] >= 10)
	{
		hex[1] += '0';
		hex[1] += 39;
	}
	else
		hex[1] += '0';
	write(1, "\\", 1);
	write(1, &hex[0], 1);
	write(1, &hex[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] < 32)
		{
			hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	char string[] = "con\ft \b \v \aan \r cio";
	ft_putstr_non_printable(string);
}*/
