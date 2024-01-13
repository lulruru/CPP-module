# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 16:11:11 by russelenc         #+#    #+#              #
#    Updated: 2024/01/13 08:12:57 by russelenc        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRC		= ClapTrap.cpp main.cpp

CC 		= c++

FLAGS	= -std=c++98 -Wall -Wextra -Werror 

OBJS 	= $(SRC:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re