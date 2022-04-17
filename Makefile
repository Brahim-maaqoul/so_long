# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 22:04:20 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/04/17 15:58:31 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = so_long
NAME2 = so_long_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror
MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit

SRC = ft_check_ce.c ft_check_map.c ft_close.c ft_count_coins.c ft_draw_map.c ft_get_images.c \
	  ft_images.c ft_move.c ft_print_steps.c ft_put_err.c ft_putstr_fd.c ft_read_map.c ft_read.c \
	  ft_strchr.c ft_strdup.c ft_strlen.c ft_substr.c get_next_line.c so_long.c

BNS = ft_itoa.c ft_check_ce.c ft_check_map_bonus.c ft_close.c ft_count_coins.c ft_draw_map_bonus.c ft_get_images.c \
	  ft_image_bonus.c ft_move_bonus.c ft_print_steps_bonus.c ft_put_err.c ft_putstr_fd.c ft_read_map.c ft_move_enemy.c \
	  ft_read.c ft_strchr.c ft_strdup.c ft_strlen.c ft_substr.c get_next_line.c so_long_bonus.c

OBJS = $(SRC:.c=.o)
OBJB = $(BNS:.c=.o)

%.o : %.c so_long.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME1)
bonus : $(NAME2)

$(NAME1) : $(OBJS)
	$(CC) $(CFLAGS) $(MLX_FLAGS) -o $@ $^
$(NAME2) : $(OBJB)
	$(CC) $(CFLAGS) $(MLX_FLAGS) -o $@ $^

clean :
	rm -rf $(OBJS) $(OBJB)

fclean : clean
	rm -rf $(NAME1) $(NAME2)

re : fclean all