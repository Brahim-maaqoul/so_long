/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:34:33 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/09 02:17:00 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int ac, char **av)
{
  t_game game;


  ft_read_map(&game, av);
  ft_check_map(&game);
  game.mlx = mlx_init();
  game.window = mlx_new_window(game.mlx, (game.img_width * 50), (game.img_height * 50), "Title");
  //mlx_pixel_put(mlx, window, 1, 1, 0XFFFFFF);
  ft_images(&game);
  // ft_map(&game);
  ft_draw_map(&game);
  mlx_hook(game.window, 2, 1L<<0, ft_move, &game);
  mlx_hook(game.window, 17, 1L<<0, ft_close, &game);
  // printf("%d\n", game.img_width);
  // printf("%d\n", game.img_height);
  mlx_loop(game.mlx);
  return (0);
}