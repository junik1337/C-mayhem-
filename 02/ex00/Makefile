# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 09:15:24 by ayassir           #+#    #+#              #
#    Updated: 2022/12/28 09:15:25 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Fixed

SRCS	=	main.cpp Fixed.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

HEADER	=	Fixed.hpp

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