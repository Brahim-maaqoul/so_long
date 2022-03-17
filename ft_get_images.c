/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 03:53:44 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/17 01:23:05 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_player(t_game game, int i, int j)
{
	game.path = "./images/playerS.xpm";
	mlx_xpm_file_to_image(game.mlx, game.path, &game.width, &game.height);
	mlx_put_image_to_window(game.mlx, game.window, &game.width * i, &game.height * j);
}

void	ft_get_coin(t_game game, int i, int j)
{
	gmae.path = "images/coin0.xpm";
	mlx_xpm_file_to_image(game.mlx, game.path, &game.width, &game.height);
	mlx_put_image_to_window(game.mlx, game.window, &game.width * i, &game.height * j);
}

void	ft_get_door(t_game game, int i, int j)
{
	gmae.path = "./images/exit0.xpm";
	mlx_xpm_file_to_image(game.mlx, game.path, &game.width, &game.height);
	mlx_put_image_to_window(game.mlx, game.window, &game.width * i, &game.height * j);
}

void	ft_get_wall(t_game game, int i, int j)
{
	game.path = "./images/wall.xpm";
	mlx_xpm_file_to_image(game.mlx, game.path, &game.width, &game.height);
	mlx_put_image_to_window(game.mlx, game.window, &game.width * i, &game.height * j);
}

void	ft_get_ground(t_game game, int i, int j)
{
	game.path = "./images/back.xpm";
	mlx_xpm_file_to_image(game.mlx, game.path, &game.width, &game.height);
	mlx_put_image_to_window(game.mlx, game.window, &game.width * i, &game.height * j);
}