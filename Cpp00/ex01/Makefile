# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 13:45:09 by minchoi           #+#    #+#              #
#    Updated: 2021/12/11 15:31:00 by minchoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAG = -Wextra -Werror -Wall -std=c++98

NAME = phonebook

SRCS = main.cpp\
		Contact.cpp\
		PhoneBook.cpp\
		
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAG) -I./ -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -I./ $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
