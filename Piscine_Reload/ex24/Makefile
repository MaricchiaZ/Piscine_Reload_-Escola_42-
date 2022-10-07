SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADERS	= ./includes

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

RM	= rm -f

.c.o:
	gcc -Wall -Wextra -Werror -c $< -I ${HEADERS} -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re