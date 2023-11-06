/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tida-sil <tida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:56:19 by tida-sil          #+#    #+#             */
/*   Updated: 2023/09/10 19:17:57 by tida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while ((min + i) < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

// int	main(void)
// {
// 	int	**range;
// 	int	i;
// 	int	min = 10;
// 	int	max = 15;
// 	i = 0;
// 	ft_ultimate_range(&*range, min, max);
// 	while ((min + i) < max)
// 	{
// 		printf("%d\n", range[0][i]);
// 		i++;
// 	}
// }
