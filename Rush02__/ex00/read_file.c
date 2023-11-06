/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:22:31 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:22:34 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*read_file(char *file, int size)
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
	close(f);
	return (str);
}
