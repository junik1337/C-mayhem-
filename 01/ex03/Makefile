# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 11:06:08 by ayassir           #+#    #+#              #
#    Updated: 2022/12/26 11:06:10 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Weapon

SRCS	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

HEADER	=	Weapon.hpp HumanA.hpp HumanB.hpp

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