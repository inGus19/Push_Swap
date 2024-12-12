# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaes <acaes@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 18:42:40 by acaes             #+#    #+#              #
#    Updated: 2024/12/12 12:34:26 by acaes            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

ULT_DIR = ../Ultimate
ULT_LIB = $(ULT_DIR)/libft.a
ULT_INC = $(ULT_DIR)/inc

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I . -I $(ULT_INC)

SRCS = src/pars/parse_arguments.c \
       src/pars/is_number.c \
       src/pars/is_unique.c \
       src/pars/ft_atoi.c \
       
       src/node/dlst_new.c \
       src/node/find_max_node.c \
       src/node/move_to_top.c \
       
	   src/dlst/dlst_init.c \
       src/dlst/dlst_add_front.c \
       src/dlst/dlst_add_back.c \
       src/dlst/dlst_remove_front.c \
       src/dlst/dlst_remove_back.c \
       src/dlst/free_dlst.c \
       src/dlst/is_sorted.c \
       
	   src/mouv/swapy.c \
       src/mouv/pushy.c \
       src/mouv/rotate.c \
       src/mouv/reverse.c \

       src/sort/find_median.c \
       src/sort/stack_to_tab.c \
       src/sort/sort_tab.c \
       src/sort/push_chunk.c \
       src/sort/back_to_a.c \
       
	   src/algo/sort_three.c \
	   src/algo/big_sort.c \
	   src/algo/push_swap.c \
       main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(ULT_LIB)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(ULT_LIB)

$(ULT_LIB):
	$(MAKE) -C $(ULT_DIR)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(ULT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(ULT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
