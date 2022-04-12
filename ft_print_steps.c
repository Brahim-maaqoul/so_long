/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_steps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:11:31 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/09 23:32:25 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + 48, fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}

static void	ft_change_door(t_game *game, int i, int j)
{
	if (ft_count_coins(game) == 0)
	{
		game->p_door = "./images/exit1.xpm";
		game->door = game->door = mlx_xpm_file_to_image(game->mlx, game->p_door, &game->img_width, &game->img_height);
		ft_door(game, i, j);
	}
}

static void	ft_change_moves(t_game *game, int i, int j, char c)
{
	if (c == 'd')
	{
		game->p_player = "./images/playerD.xpm";
		game->player = mlx_xpm_file_to_image(game->mlx, game->p_player, &game->img_width, &game->img_height);
		ft_player(game, i, j);
	}
	else if (c == 'a')
	{
		game->p_player = "./images/playerA.xpm";
		game->player = mlx_xpm_file_to_image(game->mlx, game->p_player, &game->img_width, &game->img_height);
		ft_player(game, i, j);
	}
	else if (c == 'w')
	{
		game->p_player = "./images/playerW.xpm";
		game->player = mlx_xpm_file_to_image(game->mlx, game->p_player, &game->img_width, &game->img_height);
		ft_player(game, i, j);
	}
	else if (c == 's')
	{
		game->p_player = "./images/playerS.xpm";
		game->player = mlx_xpm_file_to_image(game->mlx, game->p_player, &game->img_width, &game->img_height);
		ft_player(game, i, j);
	}
}

void    ft_print_steps(t_game *game, int i, int j, char c)
{
    ft_putnbr_fd(game->steps, 1);
    ft_putchar_fd('\n', 1);
	ft_change_moves(game, i, j, c);
	ft_change_door(game, i, j);
}