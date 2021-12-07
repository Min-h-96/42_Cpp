# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 14:23:35 by minchoi           #+#    #+#              #
#    Updated: 2021/12/06 15:01:49 by minchoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAG = -Wextra -Werror -Wall -std=c++98

NAME = animal

SRCS = main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		Brain.cpp\
		
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -I./ -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
