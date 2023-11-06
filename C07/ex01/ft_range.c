/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:26:22 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/08 10:19:58 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array_of_ints;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		array_of_ints = malloc((max - min) * sizeof(int));
		while (min < max)
		{
			array_of_ints[i] = min;
			min++;
			i++;
		}
	}
	return (array_of_ints);
}
/*
int	main(void)
{
	int	*ints;
	int	i;
	int	max;
	int	min;

	i = 0;
	min = -10;
	max = 2;
	ints = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", ints[i]);
		i++;
	}
}*/
