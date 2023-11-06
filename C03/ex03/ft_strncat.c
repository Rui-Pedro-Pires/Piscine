/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:15:23 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/01 20:36:25 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				x;
	unsigned int	i;

	i = 0;
	x = 0;
	while (dest[x])
		x++;
	while (src[i] != '\0' && i < nb)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char string[50] = "Hello ";
	printf("%s", ft_strncat(string, "World   ", 20)); 
}*/
