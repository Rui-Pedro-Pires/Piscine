/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:49:06 by ruiolive          #+#    #+#             */
/*   Updated: 2023/08/28 12:38:19 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	rec;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			rec = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = rec;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*
int	main(void)
{
	int	tr[] = {98, 97, 100, 99, 101}; 
	ft_sort_int_tab(tr, 5);
	write(1, tr, 20);
}*/
