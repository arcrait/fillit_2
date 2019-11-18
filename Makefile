# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/12 13:26:16 by bkasandr          #+#    #+#              #
#    Updated: 2019/11/15 14:59:27 by bkasandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC_PATH = ./src/
OBJ_PATH = ./obj/
INC_PATH = ./includes/
LIB_PATH = ./includes/libft/

SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC = $(addprefix -I, $(INC_PATH))

SRC_NAME =	main.c			\
			validator.c	\
			list.c			\
			coordinates.c	\
			map.c	\
			move.c
OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = fillit.h

all: $(NAME)

lib_refresh:
	make -C $(LIB_PATH)

$(NAME): $(OBJ)
	make lib_refresh
	echo $(LIB_PATH)/includes
	gcc -o $(NAME) $(OBJ) -L $(LIB_PATH) -lft


$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	mkdir -p $(OBJ_PATH)
	gcc -Wall -Werror -Wextra $(INC) -I $(LIB_PATH)/includes -o $@ -c $<

clean:
	/bin/rm -rf $(OBJ_PATH)
	make clean -C $(LIB_PATH)

fclean: clean
	/bin/rm -f $(NAME)
	make fclean -C $(LIB_PATH)

re: fclean all