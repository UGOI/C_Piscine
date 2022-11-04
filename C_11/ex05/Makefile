
SRCS	= libary.c do-op.c

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc ${CFLAGS} -o $@ $^

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re