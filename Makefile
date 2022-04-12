# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 22:04:20 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/04/12 15:43:04 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SO_LONG = so_long

CC = cc
CFLAGS = -Wall -Wextra -Werror
MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit

SRC = free_tab.c ft_check_ce.c ft_check_map.c ft_close.c ft_count_coins.c ft_draw_map.c ft_get_images.c \
	  ft_images.c ft_move.c ft_print_steps.c ft_put_err.c ft_putstr_fd.c ft_read_map.c \
	  ft_read.c ft_strchr.c ft_strdup.c ft_strlen.c ft_substr.c get_next_line.c

OBJS = $(SRC:.c=.o)

%.o : %.c so_long.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(SO_LONG)

$(SO_LONG) : $(OBJS)
	$(CC) $(CFLAGS) so_long.c $(MLX_FLAGS) -o $@ $^

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(SO_LONG)

re : fclean all