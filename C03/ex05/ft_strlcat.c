/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:17:40 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/02 17:52:42 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *src1)
{
	unsigned int	i;

	i = 0;
	while (src1[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	c;

	c = ft_strlen(dest);
	x = ft_strlen(dest);
	i = 0;
	if (nb != 0)
	{
		while (src[i] != '\0' && x < nb - 1)
		{
			dest[x] = src[i];
			i++;
			x++;
		}
		dest[x] = '\0';
	}
	if (nb <= c)
		return (nb);
	else
		return (c + ft_strlen(src));
}
/*
int	main(void)
{
	char	st[80] = "trewq";
	printf("%d\n", ft_strlcat(st, "tre", 5));
	printf("%s", st);
}*/
