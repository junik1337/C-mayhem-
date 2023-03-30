# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 14:32:52 by ayassir           #+#    #+#              #
#    Updated: 2022/12/12 11:47:20 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PhoneBook

SRCS	=	Contact.cpp PhoneBook.cpp main.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

HEADER	=	 Contact.hpp PhoneBook.hpp

CC		=	c++

RM		=	rm -rf

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