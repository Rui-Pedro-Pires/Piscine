/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tida-sil <tida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:40:35 by tida-sil          #+#    #+#             */
/*   Updated: 2023/09/14 17:34:08 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
 #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strslen(int ac, char *av[])
{
	int	i;
	int	total;

	i = -1;
	total = 0;
	while (++i < ac)
	{
		total = total + ft_strlen(av[i]);
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		j;
	int		count;
	int		l;

	l = size;
	str = malloc(((ft_strslen(l, strs)) + (ft_strlen(sep) * (l - 1)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	count = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[count++] = strs[i][j++];
		j = 0;
		while ((sep[j] != '\0') && (i < (size - 1)))
			str[count++] = sep[j++];
	}
	str[count + 1] = '\0';
	return (str);
}

 int	main(void)
 {
 	char *arr[] = {"Ola", "Ola", "Ola", "Ola"};

 	printf("%s\n", ft_strjoin(4, arr, "separacao"));
 }
