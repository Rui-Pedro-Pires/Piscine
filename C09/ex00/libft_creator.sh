#!/bin/sh
cc -Wall -Werror -Wextra -c ft_putstr.c ft_putchar.c ft_strlen.c ft_swap.c ft_strcmp.c
ar rcs libft.a ft_putstr.o ft_strlen.o ft_putchar.o ft_strcmp.o ft_swap.o
