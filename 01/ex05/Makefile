# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 15:35:50 by ayassir           #+#    #+#              #
#    Updated: 2022/12/26 15:35:53 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl

SRCS	=	main.cpp Harl.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

HEADER	=	Harl.hpp

CC		=	c++

OBJS	=	$(SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c 
	$(CC) $(FLAGS) -c -o $@ $<
	
$(NAME): $(OBJS) $(HEADER)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all