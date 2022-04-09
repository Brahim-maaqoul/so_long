/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_images.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 07:00:35 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/08 23:46:47 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_images(t_game *game)
{
    game->p_player = "./images/playerS.xpm";
    game->player = mlx_xpm_file_to_image(game->mlx, game->p_player, &game->img_width, &game->img_height);
    game->p_wall = "./images/wall.xpm";
    game->wall = mlx_xpm_file_to_image(game->mlx, game->p_wall, &game->img_width, &game->img_height);
    game->p_ground = "./images/back.xpm";
    game->ground = mlx_xpm_file_to_image(game->mlx, game->p_ground, &game->img_width, &game->img_height);
    game->p_coin = "./images/coin0.xpm";
    game->coin = mlx_xpm_file_to_image(game->mlx, game->p_coin, &game->img_width, &game->img_height);
    game->p_door = "./images/exit0.xpm";
    game->door = mlx_xpm_file_to_image(game->mlx, game->p_door, &game->img_width, &game->img_height);
}