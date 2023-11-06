/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:17:10 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/11 11:29:42 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*string; 

	string = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (string == 0)
		return (0);
	while (i < ac)
	{
		string[i].size = ft_strlen(av[i]);
		string[i].str = av[i];
		string[i].copy = malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		ft_strcpy(string[i].copy, av[i]);
		i++;
	}
	string[i].str = 0;
	return (string);
}
