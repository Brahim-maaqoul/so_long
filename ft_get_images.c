/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 03:53:44 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/16 02:04:09 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_player(t_game *game, int i, int j)
{
	game->playerrrr.x = i;
	game->playerrrr.y = j;
	mlx_put_image_to_window(game->mlx, game->window,
		game->player, i * 50, j * 50);
}

void	ft_coin(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->mlx, game->window,
		game->coin, i * 50, j * 50);
}

void	ft_door(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->mlx, game->window,
		game->door, i * 50, j * 50);
}

void	ft_wall(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->mlx, game->window,
		game->wall, i * 50, j * 50);
}

void	ft_ground(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->mlx, game->window,
		game->ground, i * 50, j * 50);
}
