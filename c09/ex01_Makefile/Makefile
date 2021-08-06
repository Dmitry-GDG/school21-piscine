# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trurgot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 07:54:23 by trurgot           #+#    #+#              #
#    Updated: 2021/06/22 07:54:36 by trurgot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
HEAD	= includes/ft.h
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -c

#${NAME}:	${CC} ${CFLAGS} ${OBJS} -I ${HEAD}
.c.o:                                           
	${CC} ${CFLAGS} $< -o ${<:.c=.o} -I ${HEAD} 

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
