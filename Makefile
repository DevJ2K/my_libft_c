NAME = libft.a

SRCS = 	$(wildcard *.c)

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

.c.o:
		gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I ./

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

all: ${NAME}

re: fclean all

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

.PHONY: all clean fclean re
