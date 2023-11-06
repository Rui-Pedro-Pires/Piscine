/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:23:08 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/13 13:58:15 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_get_pos(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != str)
		i++;
	return (i);
}

int	ft_str_check(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == '+' || base[i] == '-' 
				|| base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count;
	int	num;

	i = 0;
	num = 0;
	count = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i])
	{
		if (ft_str_check(str[i], base) == 0 && ft_base_check(base) == 0)
			return (0);
		num = num * ft_base_len(base) + (ft_get_pos(str[i++], base));
	}
	if (count % 2 == 1)
		return (num *= -1);
	return (num);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int	size;
	char	*remainder;
	char	temp;

	i = 0;
	remainder = malloc(sizeof(char) * 20);
	while (nbr >= 1)
	{
		remainder[i] = (nbr % ft_base_len(base)) + '0';
		nbr /= ft_base_len(base);
		i++;
	}
	i = 0;
	size = ft_base_len(remainder) - 1;
	while (size > i)
	{
		temp = remainder[i];
		remainder[i] = remainder[size];
		remainder[size] = temp;
		size--;
		i++;
	}
	return (remainder);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num;
	int	i;
	int	x;
	char	*str_num;

	i = 0;
	str_num = malloc(sizeof(char) * 20);
	num = ft_atoi_base(nbr, base_from);
	str_num = ft_putnbr_base(num, base_to);
	while (str_num[i])
	{
		x = str_num[i];
		str_num[i] = base_to[x];
		i++;
	}
	return(str_num);
}

int	main(int ac, char **av)
{
	(void) ac;
	
	//printf("%s", ft_putnbr_base(42, "01"));
	char	*string = ft_convert_base(av[1], av[2], av[3]);
	printf("Nber B.Orig: %s\n", av[1]);
	printf("Base Origin: %s\n", av[2]);
	printf("base final:  %s\n", av[3]);
	printf("Resultado puta rota: %s\n", string);
}

//1000101    69 em binario    em hexa 45