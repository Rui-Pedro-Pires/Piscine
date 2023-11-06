/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:21:29 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:21:33 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	***init_dict(int size)
{
	int		i;
	char	**number;
	char	***res;

	i = 0;
	res = (char ***)malloc(sizeof(char *) * size);
	while (i < size)
	{
		number = (char **)malloc(sizeof(char *) * 2);
		number[0] = 0;
		number[1] = 0;
		res[i] = number;
		i++;
	}
	return (res);
}

void	free_dict(char ***dic, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(dic[i][0]);
		free(dic[i][1]);
		free(dic[i]);
		i++;
	}
	free(dic);
}

char	**get_element_dict(char ***dict, char *number)
{
	int	id;

	id = hash_id(number);
	if (id != -1)
		if (dict[id])
			return (dict[id]);
	return (0);
}

int	add_element_dict(char ***dict, char *number, char *text_number)
{
	int	id;

	id = hash_id(number);
	if (id != -1)
	{
		if (dict[id][0] != 0 || dict[id][1] != 0)
		{
			if (ft_strcmp(dict[id][1], text_number) == 0)
				return (-1);
			else
				return (-99);
		}
		dict[id][0] = number;
		dict[id][1] = text_number;
		return (0);
	}
	return (-1);
}

int	set_element_dict(char ***dict, char *number, char *text_number)
{
	int	id;

	id = hash_id(number);
	if (id != -1)
	{
		free(dict[id][0]);
		free(dict[id][1]);
		dict[id][0] = number;
		dict[id][1] = text_number;
		return (0);
	}
	return (-1);
}
