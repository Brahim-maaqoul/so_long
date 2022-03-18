/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 07:18:01 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/18 07:41:08 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_draw_map(t_game *game)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (game->map[i])
    {
        while (game->map[i][j])
        {
            if (game->map[i][j] == '1')
                ft_wall(game, i, j);
            else if (game->map[i][j] == '0')
                ft_ground(game, i, j);
            else if (game->map[i][j] == 'P')
                ft_player(game, i, j);
            else if (game->map[i][j] == 'C')
                ft_coin(game, i, j);
            else if (game->map[i][j] == 'E')
                ft_door(game, i, j);
            j++;
        }
        i++;
        j = 0;
    }
}