/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushlibs2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:22:58 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:22:59 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

// This function returns the n characters without the 3 final characters of num
void	ft_getinit(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = ft_strlen(str) - 3;
	while (i < x)
	{
		str[i] = str[i];
		i++;
	}
	str[i] = '\0';
}
// This function returns the 3 last characters of num

void	ft_getlast(char *str)
{
	int	i;
	int	x;

	x = 0;
	i = ft_strlen(str) - 3;
	while (i < ft_strlen(str))
	{
		str[x] = str[i];
		x++;
		i++;
	}
	str[x] = '\0';
}
// This function preps the number atoi style :)
// Returns empty string on error

char	*prep_num(char *str)
{
	int	i;

	i = 0;
	if (*str == '+')
		str++;
	while (*str == '0' && *(str + 1) >= '0' && *(str + 1) <= '9')
		str++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (str);
}

//This function returns the index on the dict of the string passed as parameter
//if the value doesn't exist returns -1
int	hash_id(char *num)
{
	int	len;

	len = ft_strlen(num);
	if (len == 1)
		return (atoi(num));
	if (len == 2 && num[0] == '1')
		return (atoi(num));
	if (len == 2 && num[1] == '0')
		return (18 + (num[0] - '0'));
	if (ft_strcmp("100", num) == 0)
		return (28);
	if (ft_strcmp("1000", num) == 0)
		return (29);
	if (ft_strcmp("1000000", num) == 0)
		return (30);
	if (ft_strcmp("1000000000", num) == 0)
		return (31);
	return (-1);
}
