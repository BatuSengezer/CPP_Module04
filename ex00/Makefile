# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 21:10:58 by bsengeze          #+#    #+#              #
#    Updated: 2025/03/20 13:23:19 by bsengeze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism
CC = c++
RM = rm -rf
FLAGS = -std=c++98 -Wall -Wextra -Werror
INCLUDES = -I./includes
OBJ_DIR = objs/
SRC_DIR = srcs/
GREEN   = \033[32;1m
RESET	= \033[0m

SRC 	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
SRCS	= $(addprefix $(SRC_DIR), $(SRC))

OBJ		= $(SRC:.cpp=.o)
OBJS 	= $(addprefix $(OBJ_DIR), $(OBJ))

all: $(OBJ_DIR) $(SRCS) $(OBJS) $(NAME)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)
		@echo "$(GREEN) Compiled with $(FLAGS)$(RESET)"

clean:
		$(RM) $(OBJ_DIR)
		@echo "$(GREEN) Cleaned $(RESET)"

fclean: clean
		$(RM) $(NAME)
		@echo "$(GREEN) Full cleaned $(RESET)"

re: fclean all

.PHONY: all clean fclean re
