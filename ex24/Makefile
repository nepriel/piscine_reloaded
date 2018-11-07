NAME = libft.a
FLAGS = -Wall -Werror -Wextra


make: all

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c ./srcs/ft_putchar.c\
					./srcs/ft_strcmp.c\
					./srcs/ft_putstr.c\
					./srcs/ft_strlen.c\
					./srcs/ft_swap.c -I ./includes/
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)

clean:
	rm ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
fclean: clean
	rm $(NAME)
re: fclean all
