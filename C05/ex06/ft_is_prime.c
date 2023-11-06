/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:11:54 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/04 12:10:00 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 0;
	if (nb <= 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			result++;
		i++;
	}
	if (result == 0)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(23));
}*/
