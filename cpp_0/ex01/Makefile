# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 17:20:40 by cyalniz           #+#    #+#              #
#    Updated: 2022/10/04 17:22:03 by cyalniz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

FILES = phone_book.cpp 

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