/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:15:03 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/02 17:52:05 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;
	int	y;

	x = 0;
	i = 0;
	y = 0;
	while (to_find[i])
		i++;
	if (i == 0)
		return (str);
	while (str[x])
	{
		y = 0;
		while (to_find[y] && to_find[y] == str[x + y])
		{
			if (to_find[y + 1] == '\0')
				return (&str[x]);
			y++;
		}
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	char st1[] = "saststeteeeste";
	printf("%s\n", strstr(st1, ""));
	printf("%s", ft_strstr(st1, ""));
}*/
