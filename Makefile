# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 21:34:35 by mmaila            #+#    #+#              #
#    Updated: 2024/01/24 14:36:36 by mmaila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
FLAGS= -Wall -Werror -Wextra

SRCS= main.c parse.c sort.c big_sort.c index.c srcs/swap_push/swap_push.c srcs/swap_push/swap_push_1.c \
		srcs/swap_push/swap_push_2.c srcs/swap_push/swap_push_3.c srcs/list/ft_lstadd_back.c

SRCS_BONUS= bonus/main_bonus.c bonus/parse_bonus.c bonus/checker_bonus.c bonus/swp_psh_bonus/swap_push_bonus.c \
			bonus/swp_psh_bonus/swap_push_1_bonus.c bonus/swp_psh_bonus/swap_push_2_bonus.c \
			bonus/swp_psh_bonus/swap_push_3_bonus.c bonus/utils/ft_strcmp_bonus.c bonus/get_next_line/get_next_line.c \
			bonus/get_next_line/get_next_line_utils.c bonus/utils/ft_lstadd_back_bonus.c

UTILS_SRCS= exit.c srcs/utils/ft_atoi.c srcs/utils/ft_isdigit.c srcs/utils/ft_split.c srcs/utils/ft_strlcpy.c srcs/utils/ft_strlen.c \
		srcs/list/ft_lstclear.c srcs/list/ft_lstdelone.c \
		srcs/list/ft_lst_beforelast.c srcs/list/ft_lstsize.c srcs/utils/ft_putstr_fd.c srcs/utils/ft_putchar_fd.c \
		srcs/list/ft_lstlast.c

OBJS= $(SRCS:.c=.o)

OBJS_BONUS= $(SRCS_BONUS:.c=.o)

UTILS_OBJ=  $(UTILS_SRCS:.c=.o)

NAME= push_swap

NAME_BONUS= checker

all : $(NAME)

bonus : $(NAME_BONUS)

$(NAME) : $(OBJS) $(UTILS_OBJ)
	$(CC) $(FLAGS) $(OBJS) $(UTILS_OBJ) -o $(NAME)

$(NAME_BONUS) : $(OBJS_BONUS) $(UTILS_OBJ)
	$(CC) $(FLAGS) $(OBJS_BONUS) $(UTILS_OBJ) -o $(NAME_BONUS)

%.o : %.c Includes/push_swap.h bonus/checker_bonus.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS) $(OBJS_BONUS) $(UTILS_OBJ)

fclean : clean
	rm -rf $(NAME) $(NAME_BONUS)

re : fclean all