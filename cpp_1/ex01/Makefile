# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 22:16:59 by cyalniz           #+#    #+#              #
#    Updated: 2022/10/04 22:18:13 by cyalniz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie

FILES = main.cpp zombieHorde.cpp Zombie.cpp

OBJECTS = $(FILES:.cpp=.o)

COMP = c++

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMP) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all