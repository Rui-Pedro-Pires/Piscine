/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:54:46 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/08 10:43:55 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * size);
	if (*range == 0)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
/*
int	main(void)
{
	int	i;
	int	*array;
	int	n;
	int	max;
	int	min;

	max = 100;
	min = 1;
	i = 0;
	n = ft_ultimate_range(&array, min, max);
	printf("%d\n", n);
	while (i < (max - min))
	{
		printf("%d\n", array[i]);
		i++;
	}
}*/
