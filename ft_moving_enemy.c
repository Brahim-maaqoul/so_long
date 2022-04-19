/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moving_enemy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:52:42 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/19 13:59:43 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_change_enemy(t_game *game)
{
	ft_check_image_path(game->p_enemy);
		game->enemy = mlx_xpm_file_to_image(game->mlx, game->p_enemy,
			&game->img_width, &game->img_height);
}

void	ft_enemy_right(t_game *game)
{
	int	i;
	int	j;

	i = game->enemyyy.y;
	j = game->enemyyy.x;
	if (game->map[i][j + 1] == '0')
	{
		game->map[i][j] = '0';
		game->map[i][j + 1] = 'X';
		game->p_enemy = "./images/enemy_right.xpm";
		ft_change_enemy(game);
	}
	else if (game->map[i][j + 1] == 'P')
		ft_put_err(4);
}

void	ft_enemy_left(t_game *game)
{
	int	i;
	int	j;

	i = game->enemyyy.y;
	j = game->enemyyy.x;
	if (game->map[i][j - 1] == '0')
	{
		game->map[i][j] = '0';
		game->map[i][j - 1] = 'X';
		game->p_enemy = "./images/enemy_left.xpm";
		ft_change_enemy(game);
	}
	else if (game->map[i][j - 1] == 'P')
		ft_put_err(4);
}

void	ft_enemy_down(t_game *game)
{
	int	i;
	int	j;

	i = game->enemyyy.y;
	j = game->enemyyy.x;
	if (game->map[i + 1][j] == '0')
	{
		game->map[i][j] = '0';
		game->map[i + 1][j] = 'X';
		game->p_enemy = "./images/enemy_down.xpm";
		ft_change_enemy(game);
	}
	else if (game->map[i + 1][j] == 'P')
		ft_put_err(4);
}

void	ft_enemy_up(t_game *game)
{
	int	i;
	int	j;

	i = game->enemyyy.y;
	j = game->enemyyy.x;
	if (game->map[i - 1][j] == '0')
	{
		game->map[i][j] = '0';
		game->map[i - 1][j] = 'X';
		game->p_enemy = "./images/enemy_up.xpm";
		ft_change_enemy(game);
	}
	else if (game->map[i - 1][j] == 'P')
		ft_put_err(4);
}
