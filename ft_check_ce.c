/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 06:31:56 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/19 13:51:03 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_ce(char **str)
{
	int	i;
	int	j;
	int	c;
	int	e;

	i = 0;
	c = 0;
	e = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == 'C')
				c++;
			else if (str[i][j] == 'E')
				e++;
			j++;
		}
		i++;
	}
	if (c == 0 || e == 0)
		return (0);
	return (1);
}

void	ft_check_image_path(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		ft_put_err(3);
}
