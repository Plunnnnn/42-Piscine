SRC_DIR = srcs/
INC_DIR = ./includes
FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c -I
NAME = libft.a
MY_OBJECTS = $(addprefix $(SRC_DIR), ${FILES:.c=.o})

.c.o:
	$(CC) $(CFLAGS) $(INC_DIR) $< -o ${<:.c=.o}

${NAME}: ${MY_OBJECTS}
	ar -rcs $@ $^

all: ${NAME}

clean:
	rm -f ${MY_OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY : all clean fclean re