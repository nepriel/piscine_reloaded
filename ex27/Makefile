NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
S = ./srcs/
FILES = $(S)ft_putchar.c $(S)ft_putstr.c $(S)ft_strcmp.c $(S)ft_strlen.c $(S)ft_swap.c $(S)main.c
INCLUDE = -I ./includes/

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o main.o

make: all

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(FILES) $(INCLUDE)
	mv ./a.out $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm $(NAME)
