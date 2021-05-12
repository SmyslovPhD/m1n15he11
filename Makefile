NAME =	minishell

SRC =	main.c

CC =	gcc

OBJ = 	${SRC:.c=.o}

OFLAG =	-Wall -Wextra -Werror -c

LIBFT =	libft/libft.a

LFLAG = -L./libft -lft

LMAKE =	make -C libft

RM =	rm -f

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(LFLAG) $(OBJ) -o $(NAME)

.c.o:
	${CC} ${OFLAG} $< -o ${<:.c=.o}

$(LIBFT):
	$(LMAKE)

all : $(NAME)

clean:
	$(LMAKE) clean
	$(RM) $(OBJ)

fclean: clean
	$(LMAKE) fclean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
