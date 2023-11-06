/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:21:46 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:21:47 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	make_units(char	*str, char c)
{
	str[0] = c;
	str[1] = '\0';
}

void	make_tens(char *str, char c)
{
	str[0] = c;
	str[1] = '0';
	str[2] = '\0';
}

void	put_divs(char *num, int exp, char ***dict)
{
	if (ft_strcmp(num, "000") == 0)
		return ;
	if (exp == 1)
	{
		ft_putstr(" ");
		ft_putstr(get_element_dict(dict, "1000")[1]);
	}
	if (exp == 2)
	{
		ft_putstr(" ");
		ft_putstr(get_element_dict(dict, "1000000")[1]);
	}
	if (exp == 3)
	{
		ft_putstr(" ");
		ft_putstr(get_element_dict(dict, "1000000000")[1]);
	}
}

void	recurse(char *num, char ***dict, int exp)
{
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(num) + 1);
	ft_strcpy(dest, num);
	ft_getinit(dest);
	print_extended(dest, dict, exp + 1);
	ft_getlast(num);
	if (ft_strcmp(num, "000"))
		ft_putstr(" ");
	write_hundreds(num, dict);
	put_divs(num, exp, dict);
	free(dest);
}

void	print_extended(char *num, char ***dict, int exp)
{
	if (ft_strcmp(num, "") == 0)
		return ;
	if (ft_strcmp(num, "0") == 0)
	{
		write_hundreds(num, dict);
		return ;
	}
	if (ft_strlen(num) > 3)
	{
		recurse(num, dict, exp);
	}
	else
	{
		write_hundreds(num, dict);
		put_divs(num, exp, dict);
	}
}
