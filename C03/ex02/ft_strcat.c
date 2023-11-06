/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:20:54 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/01 12:49:18 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[x])
		x++;
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	st1[9] = "";
	printf("%s\n", strcat(st1, "rty"));
	printf("%s\n", strcat(st1, ""));
	printf("%s\n", strcat(st1, "rty"));
	printf("%s\n", strcat(st1, ""));
	printf("%s\n", ft_strcat(st1, ""));
}*/
