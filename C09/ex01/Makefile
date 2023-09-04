SOURCE		= srcs/

SRCS		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS		= ${addprefix ${SOURCE},${SRCS:.c=.o}}

HEAD		= includes

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

TARGET		= libft.a

.c.o:
			${CC} ${CFLAGS} -I ${HEAD} -c  $< -o ${<:.c=.o}

${TARGET}:	${OBJS}
			ar -rc ${TARGET} ${OBJS}

all:		${TARGET}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${TARGET}

re:			fclean all

.PHONY:		all clean fclean re
