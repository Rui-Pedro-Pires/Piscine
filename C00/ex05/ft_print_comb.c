/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:39:15 by ruiolive          #+#    #+#             */
/*   Updated: 2023/08/24 15:14:28 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	i;
	int	j;

	x = 0;
	while (x <= 7)
	{
		i = x + 1;
		while (i <= 8)
		{
			j = i + 1;
			while (j <= 9)
			{
				ft_putchar(x + '0');
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				if (!(x == 7 && i == 8 && j == 9))
					write(1, ", ", 2);
				j++;
			}
			i++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
