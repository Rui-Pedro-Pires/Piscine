/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:22:41 by ruiolive          #+#    #+#             */
/*   Updated: 2023/09/10 21:22:43 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_n_text(char **str);
char	*get_nbr(char **str);
char	*ft_atoa(char **str);
int		get_file_size(char *dic, int size);
char	*read_file(char *file, int size);
char	***init_dict(int size);
void	free_dict(char ***dic, int size);
char	**get_element_dict(char ***dict, char *number);
int		add_element_dict(char ***dict, char *number, char *text_number);
int		set_element_dict(char ***dict, char *number, char *text_number);
int		ft_strcmp(char *s1, char *s2);
int		hash_id(char *num);
char	***fill_dict(char ***dict, char *str);
int		ft_strlen(char *str);
void	print_extended(char *num, char ***dict, int exp);
void	ft_getinit(char *str);
void	ft_getlast(char *str);
char	*prep_num(char *str);
void	ft_putstr(char *str);
void	ft_singlenumb(char *hundred, char ***dict);
void	ft_halfnumb(char *hundred, char ***dict);
void	ft_fullnumb(char *hundred, char ***dict);
void	write_hundreds(char *hundred, char ***dict);
void	ft_putchar(char c);
void	ft_strcpy(char *dest, char *src);
int		check_dict(char ***dict, int size);
void	recurse(char *num, char ***dict, int exp);
void	make_tens(char *str, char c);
void	make_units(char	*str, char c);
void	fullnum_2(char *num, char ***dict);

#endif
