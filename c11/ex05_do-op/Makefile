# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmitry <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 12:06:43 by dmitry            #+#    #+#              #
#    Updated: 2021/08/04 12:06:48 by dmitry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= do-op
INCLUDES	:= -I includes/
SRC_FILES	:= do-op.c ft_atoi.c ft_putnbr.c
SRC_DIR		:= ./srcs/
SRCS		:= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ_FILES	:= $(SRC_FILES:.c=.o)
OBJ_DIR		:= ./srcs/
OBJS		:= $(addprefix $(OBJ_DIR), $(OBJ_FILES))
CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror -c
LFLAGS		:= -Wall -Wextra -Werror -o
RM			:= /bin/rm -f

all: $(SRCS) $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@ $(INCLUDES)

$(NAME): $(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS) $(INCLUDES)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
