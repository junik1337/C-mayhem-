# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 11:04:49 by ayassir           #+#    #+#              #
#    Updated: 2022/12/26 11:04:50 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	main

SRCS	=	main.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

CC		=	c++

OBJS	=	$(SRCS:%.c=%.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all