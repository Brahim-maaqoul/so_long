/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:49:34 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/19 14:22:33 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_rotate_coin(t_game *game, int i, int j, int c)
{
	static int	cp;
	int			b;

	b = c * 2;
	if (cp < b * 2)
		game->p_coin = "./images/coin0.xpm";
	else if (cp < b * 3)
		game->p_coin = "./images/coin1.xpm";
	else if (cp < b * 4)
		game->p_coin = "./images/coin2.xpm";
	else if (cp < b * 5)
		game->p_coin = "./images/coin3.xpm";
	else if (cp < b * 6)
		game->p_coin = "./images/coin4.xpm";
	else if (cp < b * 7)
		game->p_coin = "./images/coin5.xpm";
	ft_change_coin(game);
	ft_coin(game, i, j);
	cp++;
	if (cp >= b * 7)
		cp = 0;
}

static void	ft_movenemy(t_game *game)
{
	int	x;

	x = rand() % 20;
	if (x == 1)
		ft_enemy_right(game);
	else if (x == 2)
		ft_enemy_left(game);
	else if (x == 3)
		ft_enemy_down(game);
	else if (x == 4)
		ft_enemy_up(game);
}

int	ft_move_enemy(t_game *game)
{
	int	j;
	int	i;
	int	c;

	j = 0;
	c = ft_count_coins(game);
	ft_movenemy(game);
	while (game->map[j])
	{
		i = 0;
		while (game->map[j][i])
		{
			if (game->map[j][i] == 'C')
				ft_rotate_coin(game, i, j, c);
			i++;
		}
		j++;
	}
	ft_draw_map_bonus(game);
	return (0);
}
