# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 12:43:13 by cyalniz           #+#    #+#              #
#    Updated: 2022/10/13 17:54:35 by cyalniz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animalBrain

FILES = main.cpp Aanimal.cpp Dog.cpp Cat.cpp Brain.cpp

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJECTS = $(FILES:.cpp=.o)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all