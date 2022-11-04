
SRCS	= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJS	= $(addprefix srcs/, ${SRCS:.c=.o})

NAME	= libft.a

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			gcc ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs $@ $^

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re