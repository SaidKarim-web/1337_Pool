# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skarim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 09:47:41 by skarim            #+#    #+#              #
#    Updated: 2023/09/07 09:48:01 by skarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ./do-op.c ./ft_add.c ./ft_sub.c ./ft_mul.c ./ft_mod.c ./ft_atoi.c ./ft_div.c ./ft_putnbr.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:
	${CC} ${CFLAGS}  ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
