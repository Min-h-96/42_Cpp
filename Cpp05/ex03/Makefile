# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minchoi <minchoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 14:23:35 by minchoi           #+#    #+#              #
#    Updated: 2022/02/12 20:57:19 by minchoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++
CXXFLAG = -Wextra -Werror -Wall -std=c++98

NAME = form

SRCS = main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp\
		
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAG) -I./ $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)
	rm -rf *_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all
