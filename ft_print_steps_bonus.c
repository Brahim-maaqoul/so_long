/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_steps_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:18:20 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/16 22:12:05 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// static void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

// static void	ft_putnbr_fd(int n, int fd)
// {
// 	long	nb;

// 	nb = n;
// 	if (nb < 0)
// 	{
// 		nb = -nb;
// 		ft_putchar_fd('-', fd);
// 	}
// 	if (nb < 10)
// 	{
// 		ft_putchar_fd(nb + 48, fd);
// 	}
// 	else
// 	{
// 		ft_putnbr_fd(nb / 10, fd);
// 		ft_putnbr_fd(nb % 10, fd);
// 	}
// }

static void	ft_change_door(t_game *game, int i, int j)
{
	if (ft_count_coins(game) == 0)
	{
		game->p_door = "./images/exit1.xpm";
			game->door = mlx_xpm_file_to_image(game->mlx, game->p_door,
				&game->img_width, &game->img_height);
		ft_door(game, i, j);
	}
}

static void	ft_change_moves(t_game *game, int i, int j, char c)
{
	if (c == 'd')
	{
		game->p_player = "./images/playerD.xpm";
		ft_change_player(game);
		ft_player_bonus(game, i, j);
	}
	else if (c == 'a')
	{
		game->p_player = "./images/playerA.xpm";
		ft_change_player(game);
		ft_player_bonus(game, i, j);
	}
	else if (c == 'w')
	{
		game->p_player = "./images/playerW.xpm";
		ft_change_player(game);
		ft_player_bonus(game, i, j);
	}
	else if (c == 's')
	{
		game->p_player = "./images/playerS.xpm";
		ft_change_player(game);
		ft_player_bonus(game, i, j);
	}
}

void	ft_print_steps_bonus(t_game *game, int i, int j, char c)
{
	ft_change_moves(game, i, j, c);
	ft_change_door(game, i, j);
}
