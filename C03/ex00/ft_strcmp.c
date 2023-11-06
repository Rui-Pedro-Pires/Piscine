/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:06:52 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/01 12:43:52 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", strcmp("cao", "cao"));
	printf("%d\n", strcmp("a", "z"));
	printf("%d\n", strcmp("z", "a"));
	printf("%d\n", strcmp("", "a"));
	printf("%d\n", ft_strcmp("", "a"));
}*/
