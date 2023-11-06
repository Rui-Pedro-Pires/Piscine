/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:11:32 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/04 12:11:08 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		x *= nb;
		nb--;
	}
	return (x);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(-1));
}*/
