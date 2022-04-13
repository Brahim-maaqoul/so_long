/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 06:05:57 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/13 17:55:45 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_err(void)
{
	ft_putstr_fd("Error\nInvalid map !", 1);
	exit (1);
}

void	ft_check_extension(char *av)
{
	int	len;

	len = ft_strlen(av);
	if (av[len - 1] != 'r' || av[len - 2] != 'e'
		|| av[len - 3] != 'b' || av[len - 4] != '.')
		ft_put_err();
}
