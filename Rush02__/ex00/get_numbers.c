/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:21:53 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:21:54 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_n_text_size(char *str)
{
	int	len;
	int	bool;

	len = 0;
	while (*str != '\n' && *str != '\0')
	{
		if (*str > 32 && *str < 127)
		{
			len++;
			bool = (*str - 1 > 10 && *str - 1 <= 13);
			if ((*str - 1 == ' ' || *str - 1 == 9 || bool) && len > 1)
				len++;
		}
		str++;
	}
	return (len);
}

char	*get_n_text_aux(char **str, int size)
{
	char	*text;
	int		i;
	int		bool;

	text = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (**str != '\n' && **str != '\0')
	{
		if (**str > 32 && **str < 127)
		{
			bool = (*(*str - 1) > 10 && *(*str - 1) <= 13);
			if ((*(*str - 1) == ' ' || *(*str - 1) == 9 || bool) && i > 1)
			{
				text[i] = ' ';
				i++;
			}
			text[i] = **str;
			i++;
		}
		(*str)++;
	}
	text[i] = '\0';
	return (text);
}

char	*get_n_text(char **str)
{
	char	*text;
	int		size;

	size = get_n_text_size(*str);
	text = 0;
	if (size > 0)
	{
		text = get_n_text_aux(str, size);
	}
	return (text);
}

char	*get_nbr(char **str)
{
	char	*num;
	int		i;
	char	*tmp;

	tmp = *str;
	num = 0;
	i = 0;
	while (tmp[i] >= '0' && tmp[i] <= '9' && tmp[i] != '\0')
		i++;
	if (i > 0)
	{
		num = (char *)malloc(sizeof(char) * (i + 1));
		num[i] = '\0';
		i--;
		while (i >= 0)
		{
			num[i] = tmp[i];
			i--;
		}
	}
	while (**str != ':')
		(*str)++;
	return (num);
}

char	*ft_atoa(char **str)
{
	int	signal;

	signal = 1;
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			signal = -signal;
		(*str)++;
	}
	if (signal < 0)
		return (0);
	return (get_nbr(str));
}
