/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:54:18 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/15 14:44:53 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_d(t_game *game)
{
	int	i;
	int	j;

	i = game->playerrrr.y;
	j = game->playerrrr.x;
	if (game->map[i][j + 1] == '0' || game->map[i][j + 1] == 'C')
	{
		game->playerrrr.x++;
		if (game->map[i][j + 1] == 'C')
			game->collected--;
		game->map[i][j] = '0';
		game->map[i][j + 1] = 'P';
		game->steps++;
		ft_print_steps(game, i, j, 'd');
		ft_draw_map(game);
	}
	else if (ft_count_coins(game) == 0 && game->map[i][j + 1] == 'E')
	{
		game->playerrrr.x++;
		game->steps++;
		ft_print_steps(game, i, j, 'd');
		exit (0);
	}
}

static void	ft_a(t_game *game)
{
	int	i;
	int	j;

	i = game->playerrrr.y;
	j = game->playerrrr.x;
	if (game->map[i][j - 1] == '0' || game->map[i][j - 1] == 'C')
	{
		game->playerrrr.x--;
		if (game->map[i][j + 1] == 'C')
			game->collected--;
		game->map[i][j] = '0';
		game->map[i][j - 1] = 'P';
		game->steps++;
		ft_print_steps(game, i, j, 'a');
		ft_draw_map(game);
	}
	else if (ft_count_coins(game) == 0 && game->map[i][j - 1] == 'E')
	{
		game->playerrrr.x--;
		game->steps++;
		ft_print_steps(game, i, j, 'a');
		exit (0);
	}	
}

static void	ft_w(t_game *game)
{
	int	i;
	int	j;

	i = game->playerrrr.y;
	j = game->playerrrr.x;
	if (game->map[i - 1][j] == '0' || game->map[i - 1][j] == 'C')
	{
		game->playerrrr.y--;
		if (game->map[i - 1][j] == 'C')
			game->collected--;
		game->map[i][j] = '0';
		game->map[i - 1][j] = 'P';
		game->steps++;
		ft_print_steps(game, i, j, 'w');
		ft_draw_map(game);
	}
	else if (ft_count_coins(game) == 0 && game->map[i - 1][j] == 'E')
	{
		game->playerrrr.y--;
		game->steps++;
		ft_print_steps(game, i, j, 'w');
		exit (0);
	}	
}

static void	ft_s(t_game *game)
{
	int	i;
	int	j;

	i = game->playerrrr.y;
	j = game->playerrrr.x;
	if (game->map[i + 1][j] == '0' || game->map[i + 1][j] == 'C')
	{
		game->playerrrr.y++;
		if (game->map[i + 1][j] == 'C')
			game->collected--;
		game->map[i][j] = '0';
		game->map[i + 1][j] = 'P';
		game->steps++;
		ft_print_steps(game, i, j, 's');
		ft_draw_map(game);
	}
	else if (ft_count_coins(game) == 0 && game->map[i + 1][j] == 'E')
	{
		game->playerrrr.y++;
		game->steps++;
		ft_print_steps(game, i, j, 's');
		exit (0);
	}
}

int	ft_move(int key, t_game *game)
{
	if (key == 53)
		exit (0);
	if (key == 13)
		ft_w(game);
	if (key == 1)
		ft_s(game);
	if (key == 0)
		ft_a(game);
	if (key == 2)
		ft_d(game);
	return (0);
}
