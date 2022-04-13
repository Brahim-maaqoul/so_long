/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:20:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/13 22:05:49 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_image_bonus(t_game *game)
{
	game->p_player = "./images/playerS.xpm";
		game->player = mlx_xpm_file_to_image(game->mlx, game->p_player,
			&game->img_width, &game->img_height);
	game->p_wall = "./images/wall.xpm";
		game->wall = mlx_xpm_file_to_image(game->mlx, game->p_wall,
			&game->img_width, &game->img_height);
	game->p_ground = "./images/back.xpm";
		game->ground = mlx_xpm_file_to_image(game->mlx, game->p_ground,
			&game->img_width, &game->img_height);
	game->p_coin = "./images/coin0.xpm";
		game->coin = mlx_xpm_file_to_image(game->mlx, game->p_coin,
			&game->img_width, &game->img_height);
	game->p_door = "./images/exit0.xpm";
		game->door = mlx_xpm_file_to_image(game->mlx, game->p_door,
			&game->img_width, &game->img_height);
	game->p_enemy = "./images/enemy_down.xpm";
		game->enemy = mlx_xpm_file_to_image(game->mlx, game->p_enemy,
			&game->img_width, &game->img_height);
}

void	ft_image_by_path(t_game *game)
{
		game->player = mlx_xpm_file_to_image(game->mlx, game->p_player,
			&game->img_width, &game->img_height);
}

void	ft_enemy(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->mlx, game->window,
		game->enemy, i * 50, j * 50);
}
