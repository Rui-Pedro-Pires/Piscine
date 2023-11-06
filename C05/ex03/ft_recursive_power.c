/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:02:43 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/04 12:10:42 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power >= 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else if (power < 0)
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(-1, 100));
}*/
