# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguisy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 16:47:23 by aguisy            #+#    #+#              #
#    Updated: 2023/02/13 16:57:28 by aguisy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap.a

CC = cc -Wall -Werror -Wextra

RM = rm-f

SRC = 	push_swap.c \
		order.c \
		create_list.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

.c.o:
	$(CC) -c $< -o $(<:.c=.o)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean
	make all

.PHONY : all clean fclean re
