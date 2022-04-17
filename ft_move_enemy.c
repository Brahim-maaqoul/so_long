/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:49:34 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/17 19:34:16 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_rotate_coin(t_game *game, int i, int j, int c)
{
	static int cp;
	int 		b;

	b = c * 2;
	if (cp < 2 * b)
		game->p_coin = "./images/coin0.xpm";
	else if (cp < 3 * b)
		game->p_coin = "./images/coin1.xpm";
	else if (cp < 4 * b)
		game->p_coin = "./images/coin2.xpm";
	else if (cp < 5 * b)
		game->p_coin = "./images/coin3.xpm";
	else if (cp < 6 * b)
		game->p_coin = "./images/coin4.xpm";
	else if (cp < 7 * b)
		game->p_coin = "./images/coin5.xpm";
	ft_change_coin(game);
	ft_coin(game, i, j);
	cp++;
	if (cp >= 7 * b)
		cp = 0;
}

static void	ft_movenemy(t_game *game)
{
	int	i;
	int	j;

	i = game->enemyyy.y;
	j = game->enemyyy.x;
	if (game->map[i][j + 1] == '0' && game->map[i][j + 1] != '1')
	{
		game->map[i][j] = '0';
		game->map[i][j + 1] = 'X';
	}
	if (game->map[i][j - 1] == '0' && game->map[i][j - 1] != '1')
	{
		game->map[i][j] = '0';
		game->map[i][j - 1] = 'X';
	}
}

int	ft_move_enemy(t_game *game)
{
	int j;
	int	i;
	int	c;

	j = 0;
	c = ft_count_coins(game);
	while (game->map[j])
	{
		i = 0;
		while (game->map[j][i])
		{
			if (game->map[j][i] == 'C')
				ft_rotate_coin(game, i , j, c);
			i++;
		}
		j++;
	}
	ft_movenemy(game);
	return (0);
}
