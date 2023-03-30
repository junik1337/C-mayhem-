# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 14:32:52 by ayassir           #+#    #+#              #
#    Updated: 2022/12/11 11:08:09 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRCS	=	megaphone.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

CC		=	c++

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all