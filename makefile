# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/22 16:57:22 by ahorak            #+#    #+#              #
#    Updated: 2018/09/17 14:17:48 by ahorak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_1 = checker
NAME_2 = push_swap

FLAGS = -Wall -Werror -Wextra -I includes -g

SRCS_1 = srcs/checker.c \
		srcs/push.c srcs/swap.c srcs/rotate.c srcs/reverse_rotate.c \
		srcs/is_sorted.c srcs/receive_instructions.c \
		srcs/print_list.c srcs/get_args.c srcs/error_check.c \
		srcs/algos_tools_free.c

SRCS_2 = srcs/push_swap.c \
		srcs/push.c srcs/swap.c srcs/rotate.c srcs/reverse_rotate.c \
		srcs/print_op_reverserotate.c srcs/print_op_pushswap.c \
		srcs/print_op_rotate.c srcs/print_list.c \
		srcs/algos_size.c srcs/algos_len.c srcs/algos_backwards.c \
		srcs/algos_tools.c srcs/algos_tools_length.c \
		srcs/algos_tools_identifier.c srcs/algos_tools_large.c \
		srcs/error_check.c srcs/is_sorted.c srcs/get_args.c \
		srcs/algos_tools_free.c 

OBJ_1 = $(SRCS_1:.c=.o)
OBJ_2 = $(SRCS_2:.c=.o)

%.o: %.c
		gcc $(FLAGS) -c $< -o $@

all : $(NAME_1) $(NAME_2)

$(NAME_1) : $(OBJ_1)
		make -C libft
		gcc $(FLAGS) -o $(NAME_1) $(OBJ_1) libft/libft.a 

$(NAME_2) : $(OBJ_2)
		make -C libft
		gcc $(FLAGS) -o $(NAME_2) $(OBJ_2) libft/libft.a 

clean : 
		make clean -C libft
		rm -rf $(OBJ_1)
		rm -rf $(OBJ_2)

fclean : clean
		make fclean -C libft
		rm -rf $(NAME_1)
		rm -rf $(NAME_2)

re : fclean all	
