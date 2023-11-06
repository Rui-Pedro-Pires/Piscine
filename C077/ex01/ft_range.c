/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tida-sil <tida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:43:19 by tida-sil          #+#    #+#             */
/*   Updated: 2023/09/14 17:32:36 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
 #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *) malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

 int	main(void)
 {
 	int	i = 0;
 	int *arr;
 	int min = -2;
 	int max = 10;

 	arr = ft_range(min, max);
	 while (i < max - min)
	 {
 		printf("%d\n", arr[i]);
 		i++;
	 }
 }
