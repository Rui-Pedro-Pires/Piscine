/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_write_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:22:11 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:22:12 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

//arrays of 3 digits must be null terminated
void	write_hundreds(char *num, char ***dict)
{
	if (ft_strcmp(num, "000"))
	{
		if (ft_strlen(num) == 3)
			ft_fullnumb(num, dict);
		else if (ft_strlen(num) == 2)
			ft_halfnumb(num, dict);
		else if (ft_strlen(num) == 1)
			ft_singlenumb(num, dict);
	}
}

//writes the number if it has 3 characters
void	ft_fullnumb(char *num, char ***dict)
{
	char	search[3];

	if (num[0] >= '1')
	{
		make_units(search, num[0]);
		ft_putstr(get_element_dict(dict, search)[1]);
		ft_putstr(" ");
		ft_putstr(get_element_dict(dict, "100")[1]);
	}
	if (num[1] >= '2')
	{
		if (num[0] >= '1')
			ft_putstr(" ");
		make_tens(search, num[1]);
		ft_putstr(get_element_dict(dict, search)[1]);
	}
	else if (num[1] == '1')
	{
		if (num[0] >= '1')
			ft_putstr(" ");
		ft_putstr(get_element_dict(dict, &num[1])[1]);
	}
	if (num[1] != '1')
		fullnum_2(num, dict);
}

//writes the number if it has 2 characters
void	ft_halfnumb(char *num, char ***dict)
{
	char	search[3];

	if (num[0] >= '2')
	{
		make_tens(search, num[0]);
		ft_putstr(get_element_dict(dict, search)[1]);
	}
	else if (num[0] == '1')
	{
		ft_putstr(get_element_dict(dict, &num[0])[1]);
	}
	if (num[0] != '1')
	{
		if (num[1] != '0')
		{
			if (num[0] != '0')
				ft_putstr(" ");
			ft_putstr(get_element_dict(dict, &num[1])[1]);
		}
	}
}

//writes the number if it has 1 character
void	ft_singlenumb(char *num, char ***dict)
{
	ft_putstr(get_element_dict(dict, &num[0])[1]);
}

//compending the fullnumber function
void	fullnum_2(char *num, char ***dict)
{
	if (num[2] != '0')
	{
		if (num[0] != '0' || num[1] != '0')
			ft_putstr(" ");
		ft_putstr(get_element_dict(dict, &num[2])[1]);
	}
}
