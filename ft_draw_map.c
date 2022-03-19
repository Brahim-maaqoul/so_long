/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 07:18:01 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/18 23:32:34 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_draw_map(t_game *game)
{
    int i;
    int j;

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
                ft_player(game, i, j);
            else if (game->map[j][i] == 'C')
                ft_coin(game, i, j);
            else if (game->map[j][i] == 'E')
                ft_door(game, i, j);
            i++;
        }
        j++;
    }
}
