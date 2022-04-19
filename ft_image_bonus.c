/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:20:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/18 23:59:09 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_image_bonus(t_game *game)
{
	game->p_player = "./images/playerS.xpm";
	ft_check_image_path(game->p_player);
		game->player = mlx_xpm_file_to_image(game->mlx, game->p_player,
			&game->img_width, &game->img_height);
	game->p_wall = "./images/wall.xpm";
	ft_check_image_path(game->p_wall);
		game->wall = mlx_xpm_file_to_image(game->mlx, game->p_wall,
			&game->img_width, &game->img_height);
	game->p_ground = "./images/back.xpm";
	ft_check_image_path(game->p_ground);
		game->ground = mlx_xpm_file_to_image(game->mlx, game->p_ground,
			&game->img_width, &game->img_height);
	game->p_coin = "./images/coin0.xpm";
	ft_check_image_path(game->p_coin);
		game->coin = mlx_xpm_file_to_image(game->mlx, game->p_coin,
			&game->img_width, &game->img_height);
	game->p_door = "./images/exit0.xpm";
	ft_check_image_path(game->p_door);
		game->door = mlx_xpm_file_to_image(game->mlx, game->p_door,
			&game->img_width, &game->img_height);
	game->p_enemy = "./images/enemy_down.xpm";
	ft_check_image_path(game->p_enemy);
		game->enemy = mlx_xpm_file_to_image(game->mlx, game->p_enemy,
			&game->img_width, &game->img_height);
}

void	ft_change_player(t_game *game)
{
	ft_check_image_path(game->p_player);
		game->player = mlx_xpm_file_to_image(game->mlx, game->p_player,
			&game->img_width, &game->img_height);
}

void	ft_enemy(t_game *game, int i, int j)
{
	game->enemyyy.x = i;
	game->enemyyy.y = j;
	mlx_put_image_to_window(game->mlx, game->window,
		game->enemy, i * 50, j * 50);
}

void	ft_player_bonus(t_game *game, int i, int j)
{
	char	*str;
	
	game->playerrrr.x = i;
	game->playerrrr.y = j;
	mlx_put_image_to_window(game->mlx, game->window,
		game->player, i * 50, j * 50);

	str = ft_itoa(game->steps);
	mlx_string_put(game->mlx, game->window, 1, 1, 0x0000ff, "Number of steps :");
	mlx_string_put(game->mlx, game->window, 200, 1, 0x0000ff, str);
}

void	ft_change_coin(t_game *game)
{
	ft_check_image_path(game->p_coin);
		game->coin = mlx_xpm_file_to_image(game->mlx, game->p_coin,
			&game->img_width, &game->img_height);
}
