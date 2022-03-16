/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 03:53:44 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/16 04:51:14 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_player(t_game game, void *mlx)
{
	game.path = "./images/playerS.xpm";
	mlx_xpm_file_to_image(mlx, game.path, &game.width, &game.height);
}