#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stherman <stherman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 14:58:54 by stherman          #+#    #+#              #
#    Updated: 2014/03/09 23:29:40 by stherman         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC			= gcc -O3

NAME		= ./puissance4

SRCDIR		= ./srcs/

SRC			= $(SRCDIR)main.c			\
			  $(SRCDIR)init.c			\
			  $(SRCDIR)error.c			\
			  $(SRCDIR)display.c		\
			  $(SRCDIR)insert.c			\
			  $(SRCDIR)game.c			\
			  $(SRCDIR)check_win.c		\
			  $(SRCDIR)ai_core.c		\
			  $(SRCDIR)ai_checks.c		\
			  $(SRCDIR)get_option.c		\
			  $(SRCDIR)ok.c				\

OBJ			= $(SRC:.c=.o)

HDFLAGS		= -I./includes/ -I./libft/includes/

LDFLAGS		= -L./libft/ -lft

CFLAGS		= $(HDFLAGS) -Wall -Werror -Wextra -ansi -pedantic

RM			= rm -rf

all:		$(NAME)

$(NAME):	$(OBJ)
			@make -C libft
			@echo "\033[1;32m[Linking] \t\033[0m: \033[0;32m" | tr -d '\n'
			$(CC) -o $@ $^ $(LDFLAGS)
			@echo "\033[0m" | tr -d '\n'

clean:
			@echo "\033[1;33m[Cleaning] \t\033[0m: \033[0;31m" | tr -d '\n'
			$(RM) $(OBJ)
			@echo "\033[0m" | tr -d '\n'

fclean:		clean
			@make fclean -C libft
			@echo "\033[1;31m[Fcleaning] \t\033[0m: \033[0;31m" | tr -d '\n'
			$(RM) $(NAME)
			@echo "\033[0m" | tr -d '\n'

re:			fclean all

%.o:		%.c
			@echo "\033[1;36m[Compiling] \t\033[0m: \033[1;37m" | tr -d '\n'
			$(CC) $(CFLAGS) -c $< -o $@
			@echo "\033[0m" | tr -d '\n'

.PHONY:		all clean re fclean
