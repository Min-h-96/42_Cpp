# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 14:23:35 by minchoi           #+#    #+#              #
#    Updated: 2022/02/10 15:52:58 by minchoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAG = -std=c++98 -Wextra -Werror -Wall

NAME = iter

SRCS = main.cpp\
		
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
