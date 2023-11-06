/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:15:47 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/09 14:14:06 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

						int	ft_strlen(char **str)
{
	int	i;
	int	j;
	int	sv;

	sv = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			sv++;
		}
		i++;
	}
	return (sv);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*string;

	j = 0;
	x = 0;
	string = malloc(ft_strlen(strs) + (sizeof(sep) * (size - 1)) + 1);
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			string[x] = strs[j][i];
			x++;
			i++;
		}
		if (j < size - 1)
			string[x] = sep[0];
		x++;
		j++;
	}
	string[x] = '\0';
	return (string);
}

int	main(void)
{
	char *strings[] = {"ahsdhahsd"};
	printf("%s", ft_strjoin(0, strings, "1"));
}
