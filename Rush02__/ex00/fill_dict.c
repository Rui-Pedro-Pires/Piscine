/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:21:38 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:21:40 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	***fill_dict(char ***dict, char *str)
{
	int		id;
	char	*number;
	char	*text_number;

	id = 0;
	while (*str != '\0')
	{
		number = ft_atoa(&str);
		str++;
		text_number = get_n_text(&str);
		if (number != 0 && text_number != 0)
		{
			id = hash_id(number);
			if (id != -1)
			{
				if (add_element_dict(dict, number, text_number) == -99)
					return (0);
			}
		}
		while (*str == '\n')
			str++;
	}
	return (dict);
}

int	check_dict(char ***dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (dict[i][0] == 0 || dict[i][1] == 0)
			return (-1);
		i++;
	}
	return (0);
}
