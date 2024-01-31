# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 18:00:52 by russelenc         #+#    #+#              #
#    Updated: 2024/01/31 14:04:56 by russelenc        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphisme

SRC		= Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp Brain.cpp 

CC 		= c++

FLAGS	= -std=c++98 -Wall -Wextra -Werror 

OBJS 	= $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(FLAGS) -cpp $< -o $@

clean:
	rm -rf $(NAME)
	rm -rf $(OBJS)

fclean: clean

re: fclean all

.PHONY: all clean fclean re