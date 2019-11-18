# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/12 13:38:15 by bkasandr          #+#    #+#              #
#    Updated: 2019/11/15 15:08:24 by bkasandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = ./src/
OBJ_PATH = ./objects/
INC_PATH = ./includes/

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC = $(addprefix -I, $(INC_PATH))

SRC_NAME =	ft_isnegative.c ft_memalloc.c   ft_putchar_fd.c ft_strcat.c     	ft_striteri.c   ft_strnequ.c    ft_tolower.c  \
			ft_isprint.c    ft_memccpy.c    ft_putendl.c    ft_strchr.c     	ft_strjoin.c    ft_strnew.c     ft_toupper.c  \
			ft_atoi.c       ft_itoa.c       ft_memchr.c     ft_putendl_fd.c 	ft_strclr.c     ft_strlcat.c    ft_strnstr.c  \
			ft_bzero.c      ft_lstadd.c     ft_memcmp.c     ft_putnbr.c     	ft_strcmp.c     ft_strlen.c     ft_strrchr.c  \
			ft_count_word.c ft_lstdel.c     ft_memcpy.c     ft_putnbr_fd.c  	ft_strcpy.c     ft_strmap.c     ft_strsplit.c \
			ft_isalnum.c    ft_lstdelone.c  ft_memdel.c     ft_putstr.c     	ft_strdel.c     ft_strmapi.c    ft_strstr.c   \
			ft_isalpha.c    ft_lstiter.c    ft_memmove.c    ft_putstr_fd.c  	ft_strdup.c     ft_strncat.c    ft_strsub.c   \
			ft_isascii.c    ft_lstmap.c     ft_memset.c     ft_sqr.c        	ft_strequ.c     ft_strncmp.c    ft_strtrim.c  \
			ft_isdigit.c    ft_lstnew.c     ft_putchar.c    ft_sqrt.c       	ft_striter.c    ft_strncpy.c    ft_swap.c     \
			ft_strrev.c 	ft_strup.c		ft_strlow.c		ft_strjoin_free.c	ft_findsymb.c	ft_exit_red.c	ft_exit.c
OBJ_NAME = $(SRC_NAME:.c=.o)

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	mkdir -p $(OBJ_PATH)
	gcc -Wall -Werror -Wextra $(INC) -o $@ -c $<

$(NAME): $(OBJ)
	ar -rc $(NAME) $?
	ranlib $(NAME)

clean:
	/bin/rm -rf $(OBJ_PATH)

fclean: clean
	/bin/rm -rf $(OBJ_PATH)
	/bin/rm -f $(NAME)

re: fclean all
