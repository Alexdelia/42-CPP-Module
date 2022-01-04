# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adelille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 15:56:29 by adelille          #+#    #+#              #
#    Updated: 2022/01/04 14:44:58 by adelille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	a.out
CXX = 	c++
RM = 	rm -rf

CXXFLAGS	=	-Wall -Werror -Wextra
#CXXFLAGS	+=	-Wshadow -Wno-shadow
CXXFLAGS	+=	-std=c++98
CXXFLAGS	+=	-pedantic
#CXXFLAGS	+=	-O2
CXXFLAGS	+=	-g3
#CXXFLAGS	+=	-fsanitize=address

#MAKEFLAGS += --silent

B =		$(shell tput bold)
MAG =	$(shell tput setaf 5)
D =		$(shell tput sgr0)

SRCS =		$(wildcard *.cpp)
OBJS =		$(SRCS:.cpp=.o)

all:		$(NAME)
	@printf "\n$(B)$(MAG)$(NAME) compiled$(D)\n"

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(LIBNAME) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "$(B)Cleared$(D)"


fclean:		clean
	@$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
