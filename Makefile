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
LIBFT_PATH = ../Finish/Libft
LIBFT = $(LIBFT_PATH)/libft.a

SOURCE = push_swap.c 
OBJET = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = @rm -rf

all: $(NAME)

$(NAME): $(OBJET) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJET) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	$(RM) $(OBJET)
	make clean -C $(LIBFT_PATH)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re
