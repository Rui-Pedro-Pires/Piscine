/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:27:03 by ruiolive          #+#    #+#             */
/*   Updated: 2023/08/28 15:25:21 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size)
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = temp;
		i++;
		size--;
	}
}

/*int	main(void)
{
	int gri[] = {97, 98, 99, 100, 101};
	ft_rev_int_tab(gr, 5);
	write(1, gr, sizeof(gr));
}*/
