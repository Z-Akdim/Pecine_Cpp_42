# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 17:21:06 by amouhtal          #+#    #+#              #
#    Updated: 2021/09/12 12:43:34 by amouhtal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = clang++
FLAGS = -std=c++98 -Wall -Werror -Wextra
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp *.hpp
	$(CC) $(FLAGS) -c $< -o $@
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re : fclean all