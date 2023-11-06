SOURCE = ft_putchar.c ft_putstr.c ft_strlen.c ft_swap.c ft_strcmp.c

SOURCES = ${addprefix $(PRE), $(SOURCE)}

FLAGS = -Wall -Wextra -Werror

PRE = ./srcs/

HEADER = includes

OBJ = $(SOURCES:.c=.o)

NAME = libft.a

.c.o:
	cc $(FLAGS) -I $(HEADER) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
