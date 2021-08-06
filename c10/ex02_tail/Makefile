# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmitry <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 22:11:49 by dmitry            #+#    #+#              #
#    Updated: 2021/07/29 22:11:52 by dmitry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= ft_tail
HEADER		:= -I includes/
SRC_FILES	:= ft_putchar.c ft_putstr.c ft_strlen.c ft_tail.c main.c \
			my_atoi.c my_display_file.c my_print_mistake.c my_stdin.c
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
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS) $(HEADER)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
