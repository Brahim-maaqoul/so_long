/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_coins.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:00:04 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/09 00:04:12 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_count_coins(t_game *game)
{
    int i;
    int j;
    int cp;
    

    i = 0;
    cp = 0;
    while (game->map[i])
    {
        j = 0;
        while (game->map[i][j])
        {
            if (game->map[i][j] == 'C')
                cp++;
            j++;
        }
        i++;
    }
    return (cp);
}