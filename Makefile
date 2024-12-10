# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaes <acaes@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 18:42:40 by acaes             #+#    #+#              #
#    Updated: 2024/12/10 18:44:49 by acaes            ###   ########.fr        #
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
       src/dlst/dlst_new.c \
       src/dlst/dlst_init.c \
       src/dlst/dlst_add_front.c \
       src/dlst/dlst_add_back.c \
       src/dlst/dlst_remove_front.c \
       src/dlst/dlst_remove_back.c \
       src/dlst/free_dlst.c \
       src/dlst/is_sorted.c \
       src/mouv/sa.c \
       src/mouv/sb.c \
       src/mouv/ss.c \
       src/mouv/pa.c \
       src/mouv/pb.c \
       src/mouv/ra.c \
       src/mouv/rb.c \
       src/mouv/rr.c \
       src/mouv/rra.c \
       src/mouv/rrb.c \
       src/mouv/rrr.c \
       test.c

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
