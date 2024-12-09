# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaes <acaes@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/01 17:09:09 by acaes             #+#    #+#              #
#    Updated: 2024/12/01 17:09:15 by acaes            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_DIR = .
MOV_DIR = mouv
DLST_DIR = dlst
LIBFT_PATH = ../Ultimate/inc

LIBFT = $(LIBFT_PATH)/libft.a

SRC = $(SRC_DIR)/push_swap.c $(SRC_DIR)/dlst_print.c \
	  $(wildcard $(MOV_DIR)/*.c) \
	  $(wildcard $(DLST_DIR)/*.c)

# Objets
OBJ_DIR = obj
OBJ = $(SRC:.c=.o)

# Compilateur et options
CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(LIBFT_PATH)

# Commande de suppression
RM = rm -rf

# Règles
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_PATH)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) $(OBJ)
	make clean -C $(LIBFT_PATH)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re
