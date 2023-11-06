/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:27:30 by ruiolive          #+#    #+#             */
/*   Updated: 2023/08/28 12:46:33 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

/*int	main(void)
{
	int	n1;
	int	n2;
	n1 = 10;
	n2 = 3;
	ft_ultimate_div_mod(&n1, &n2);
	printf("%d\n", n1);
	printf("%d\n", n2);
}*/	
