/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:21:13 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/16 23:59:55 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_draw_map_bonus(t_game *game)
{
	int	i;
	int	j;

	j = 0;
	while (game->map[j])
	{
		i = 0;
		while (game->map[j][i])
		{
			if (game->map[j][i] == '1')
				ft_wall(game, i, j);
			else if (game->map[j][i] == '0')
				ft_ground(game, i, j);
			else if (game->map[j][i] == 'P')
				ft_player_bonus(game, i, j);
			else if (game->map[j][i] == 'C')
				ft_coin(game, i, j);
			else if (game->map[j][i] == 'E')
				ft_door(game, i, j);
			else if (game->map[j][i] == 'X')
				ft_enemy(game, i, j);
			i++;
		}
		j++;
	}
}
