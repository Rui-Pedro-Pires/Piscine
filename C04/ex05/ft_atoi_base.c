/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:42:43 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/12 16:16:08 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main(void)
{
	printf("%d", ft_atoi_base("bababa", "ab"));
}
