/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:21:59 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:22:00 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	func1(char ***dict, char *str, char *num)
{
	dict = fill_dict(dict, str);
	if (num == 0)
	{
		ft_putstr("Error\n");
		return ;
	}
	if (ft_strlen(num) > 12 || check_dict(dict, 32) == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	print_extended(num, dict, 0);
	free_dict(dict, 32);
}

int	main(int argc, char **argv)
{
	char	***dict;
	char	*num;
	char	*str;

	if (argc < 2 || argc > 3)
	{
		write(1, "Invalid number of arguments!", 28);
		return (0);
	}
	dict = init_dict(32);
	if (argc == 3)
	{
		str = read_file(argv[1], 100);
		num = prep_num(argv[2]);
	}
	else
	{
		str = read_file("numbers.dict", 100);
		num = prep_num(argv[1]);
	}
	if (str == 0)
		return (0);
	func1(dict, str, num);
	return (0);
}
