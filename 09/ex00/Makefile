# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 12:11:22 by ayassir           #+#    #+#              #
#    Updated: 2023/03/27 15:56:56 by ayassir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= btc 
CXXFLAGS	= -Wall -Wextra -Werror 
CC			= c++ 
STD			= -std=c++98 
SRC			= main.cpp BitcoinExchange.cpp
INC			= BitcoinExchange.hpp 
OBJ			= $(SRC:.cpp=.o) 

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME) 

%.o : %.cpp $(INC)
	$(CC) $(CXXFLAGS) -c $< -o $@ 

clean :
	rm -rf $(OBJ) 

fclean : clean
	rm -rf $(NAME) 

re : fclean all 