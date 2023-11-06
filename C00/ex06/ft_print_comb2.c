/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:58:52 by ruiolive          #+#    #+#             */
/*   Updated: 2023/08/25 13:13:17 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar(n1 / 10 + '0');
			ft_putchar(n1 % 10 + '0');
			write(1, " ", 1);
			ft_putchar(n2 / 10 + '0');
			ft_putchar(n2 % 10 + '0');
			if (n1 != 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
