/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:34:33 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/18 07:43:35 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int ac, char **av)
{
  t_game game;

  memset(&game, 0, sizeof(t_game));
  ft_read_map(&game, av);
  ft_check_map(game.map);
  game.map = mlx_init();
  game.map = mlx_new_window(game.mlx, (game.img_width * 50), (game.img_height * 50), "Title");
  //mlx_pixel_put(mlx, window, 1, 1, 0XFFFFFF);
  ft_images(&game);
  ft_draw_map(&game);
  mlx_loop(game.mlx);
  return (0);
}