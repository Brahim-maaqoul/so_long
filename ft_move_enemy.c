/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:49:34 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/16 23:19:58 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_rotate_coin(t_game *game, int i, int j)
{
	static int cp;

	if (cp < 20)
		game->p_coin = "./images/coin0.xpm";
	else if (cp < 30)
		game->p_coin = "./images/coin1.xpm";
	else if (cp < 40)
		game->p_coin = "./images/coin2.xpm";
	else if (cp < 50)
		game->p_coin = "./images/coin3.xpm";
	else if (cp < 60)
		game->p_coin = "./images/coin4.xpm";
	else if (cp < 70)
		game->p_coin = "./images/coin5.xpm";
	ft_change_coin(game);
	ft_coin(game, i, j);
	cp++;
	if (cp == 70)
		cp = 0;
}

int	ft_move_enemy(t_game *game)
{
	int j;
	int	i;

	j = 0;
	while (game->map[j])
	{
		i = 0;
		while (game->map[j][i])
		{
			if (game->map[j][i] == 'C')
				ft_rotate_coin(game, i , j);
			i++;
		}
		j++;
	}
	return (0);
}