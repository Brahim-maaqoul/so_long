/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:34:33 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/06 07:18:21 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

int main(void)
{
  void *mlx;
  void *window;
  void *img;
  int		img_width = 100;
	int		img_height = 100;
  char  *path = "./Untitled.xpm";

  mlx = mlx_init();
  window = mlx_new_window(mlx, 1000, 500, "Title");
  //mlx_pixel_put(mlx, window, 1, 1, 0XFFFFFF);
  img = mlx_xpm_file_to_image(mlx, path, &img_width, &img_height);
  mlx_put_image_to_window(mlx, window, img, 1, 1);
  mlx_loop(mlx);
  return (0);
}