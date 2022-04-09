/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_steps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:11:31 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/09 02:23:59 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + 48, fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void    ft_print_steps(t_game *game)
{
    ft_putnbr_fd(game->steps, 1);
    ft_putchar_fd('\n', 1);
}