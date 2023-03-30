# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 17:48:35 by ayassir           #+#    #+#              #
#    Updated: 2022/12/26 17:48:37 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	harlFilter

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