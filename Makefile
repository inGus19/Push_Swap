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

NAME = test

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I .

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
       src/sort/sort_stack.c \
       src/sort/small_sort.c \
       src/sort/big_sort.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
