/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:22:23 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:22:24 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_file_size(char *dic, int size)
{
	int				f;
	unsigned int	size_read;
	char			*str;
	size_t			i;

	str = NULL;
	f = open(dic, O_RDONLY);
	size_read = -1;
	i = 0;
	if (f != -1)
	{
		size_read = 0;
		str = (char *)malloc(sizeof(char) * size);
		i = read(f, str, size);
		while (i > 0)
		{
			size_read += i;
			i = read(f, str, size);
		}
		free(str);
		close(f);
	}
	else
		ft_putstr("Dict Error\n");
	return (size_read);
}

char	*read_dic(char *file, int size)
{
	int				f;
	unsigned int	size_file;
	char			*str;
	size_t			i;

	str = NULL;
	size_file = get_file_size(file, size);
	if (size_file < 0)
		return (str);
	f = open(file, O_RDONLY);
	if (f == -1)
		return (str);
	str = (char *)malloc(sizeof(char) * size_file);
	i = 0;
	while (i < size_file)
	{
		i += read(f, &str[i], size);
	}
	return (str);
}
