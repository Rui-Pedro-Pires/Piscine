/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:21:10 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/12 16:22:16 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_check_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (ft_check_charset(str[i], charset) == 1 && str[i])
			i++;
		if (str[i])
			count++;
		while (ft_check_charset(str[i], charset) == 0 && str[i])
			i++;
	}
	return (count);
}

void	ft_fill(char *array_of_str, char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_check_charset(str[i], charset) == 0)
	{
		array_of_str[i] = str[i];
		i++;
	}
	array_of_str[i] = '\0';
}

int	ft_count_size(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_check_charset(str[i], charset) == 0)
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**array_of_str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	array_of_str = malloc(sizeof(char *) * ft_count_words(str, charset) + 1);
	while (str[i])
	{
		while (ft_check_charset(str[i], charset) == 1 && str[i])
			i++;
		if (str[i])
		{
			array_of_str[j] = malloc(ft_count_size(str + 1, charset) + 1);
			ft_fill(array_of_str[j], str + i, charset);
			j++;
		}
		while (ft_check_charset(str[i], charset) == 0 && str[i])
			i++;
	}
	array_of_str[j] = 0;
	return (array_of_str);
}

int	main(int argc, char **argv)
{
	char	**string = ft_split(argv[1], argv[2]);
	int	i;

	i = 0;
	while (string[i])
	{
		printf("%s\n", string[i]);
		i++;
	}
}
