/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:01:19 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/13 12:11:00 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j] == ' ' || str[j] == '-' 
				|| str[j] == '+' || str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (1);
	return (0);
}

void	ft_put_result(long nbr, char *base)
{
	int		i;
	int		x;
	char	remainder [1000000];

	x = 0;
	i = 0;
	while (nbr > 0)
	{
		remainder[i] = (nbr % ft_strlen(base)) + '0';
		nbr /= ft_strlen(base);
		i++;
	}
	while (i > 0)
	{
		x = remainder[i - 1] - '0';
		write(1, &base[x], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr1;

	nbr1 = nbr;
	if (check_base(base) == 0)
	{
		if (nbr1 < 0)
		{
			nbr1 *= -1;
			write(1, "-", 1);
			ft_put_result(nbr1, base);
		}
		else
			ft_put_result(nbr1, base);
	}
}

int	main(void)
{
	ft_putnbr_base(0, "01");
}
