/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:34:33 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/16 20:31:25 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac == 2)
	{
		game.steps = 0;
		ft_check_extension(av[1]);
		ft_read_map(&game, av);
		ft_check_map(&game);
		game.mlx = mlx_init();
			game.window = mlx_new_window(game.mlx, (game.img_width * 50),
				(game.img_height * 50), "So long");
		ft_images(&game);
		ft_draw_map(&game);
		mlx_hook(game.window, 2, 1L << 0, ft_move, &game);
		mlx_hook(game.window, 17, 1L << 0, ft_close, &game);
		mlx_loop(game.mlx);
		return (0);
	}
	ft_put_err(1);
}
