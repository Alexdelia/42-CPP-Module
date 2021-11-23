# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adelille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 15:56:29 by adelille          #+#    #+#              #
#    Updated: 2021/11/23 14:59:58 by adelille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	megaphone
CC = 	clang++
RM = 	rm -rf

CFLAGS	=	-Wall -Werror -Wextra
CFLAGS	+=	-std=c++98
#CFLAGS +=	-O2
#CFLAGS +=	-g
#CFLAGS +=	-fsanitize=address

#MAKEFLAGS += --silent

B =		$(shell tput bold)
MAG =	$(shell tput setaf 5)
D =		$(shell tput sgr0)

SRCS =		megaphone.cpp
OBJS =		$(SRCS:.cpp=.o)

all:		$(NAME)
	@printf "\n$(B)$(MAG)$(NAME) compiled$(D)\n"

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBNAME) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "$(B)Cleared$(D)"


fclean:		clean
	@$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re launch
