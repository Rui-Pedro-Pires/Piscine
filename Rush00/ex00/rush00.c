/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:03:58 by ruiolive          #+#    #+#             */
/*   Updated: 2023/08/27 15:38:26 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_putchar(char c);

void	ft_line(int n1, int n2, int x, int y)
{
	if ((n2 == 1 && n1 == 1) || (n2 == x && n1 == 1))
	{
		ft_putchar('o');
	}
	else if ((n2 == x && n1 == y) || (n1 == y && n2 == 1))
	{
		ft_putchar('o');
	}
	else if (n1 == 1 || (n1 == y && n2 > 1 && n2 < x))
	{
		ft_putchar('-');
	}
	else if ((n1 > 1 && n1 < y && n2 == 1) || n2 == x)
	{
		ft_putchar('|');
	}
	else if (n1 > 1 && n1 < y && n2 > 1 && n2 < x)
	{
		ft_putchar(' ');
	}
}

void	rush00(int x, int y)
{
	int	n1;
	int	n2;

	if ( x <= 0 || y <= 0)
	{
		write(1, "Error: You need to choose a positive number!\n", 45);
	}
	else
	{
		n1 = 1;
		while (n1 <= y)
		{
			n2 = 1;
			while (n2 <= x)
			{
				ft_line(n1, n2, x, y);
				n2++;
			}
			ft_putchar('\n');
			n1++;
		}
	}	
}

/*
int	main(void)
{
	rush(10, 20);
}*/
