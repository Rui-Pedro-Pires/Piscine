/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:44:23 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/04 17:25:53 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 0;
	if (nb <= 1)
		return (2);
	while (i < nb / (i - 1))
	{
		if (nb % i == 0)
			result++;
		i++;
	}
	if (result != 0)
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(2147483457));
}*/
