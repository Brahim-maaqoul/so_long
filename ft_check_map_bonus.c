/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:22:08 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/13 22:06:53 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_check_walls(char **str, int i)
{
	int	j;

	j = 0;
	while (str[i][j])
	{
		if (str[i][j] != '1')
			return (0);
		j++;
	}
	return (1);
}

static int	ft_check_rocks(char **str)
{
	int	len;
	int	j;
	int	i;

	i = 0;
	len = ft_strlen(str[i]) - 1;
	while (str[i])
	{
		if (str[i][0] != '1' || str[i][len] != '1')
			return (0);
		j = 0;
		while (str[i][j])
		{
			if ((str[i][j] != '1' && str[i][j] != '0')
					&& (str[i][j] != 'C' && str[i][j] != 'E'
					&& str[i][j] != 'P' && str[i][j] != 'X'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_check_len(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_strlen(str[i]) != ft_strlen(str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_check_player(char **str)
{
	int	i;
	int	j;
	int	p;
	int	x;

	i = 0;
	x = 0;
	p = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == 'P')
				p++;
			if (str[i][j] == 'X')
				x++;
			j++;
		}
		i++;
	}
	if (p != 1 || x == 0)
		return (0);
	return (1);
}

void	ft_check_map_bonus(t_game *game)
{
	int		i;
	size_t	nbr;

	i = 0;
	nbr = 0;
	while (game->map[nbr])
		nbr++;
	if (ft_strlen(game->map[0]) == nbr)
		ft_put_err();
	nbr--;
	if (!ft_check_walls(game->map, i) || !ft_check_walls(game->map, nbr)
		|| !ft_check_rocks(game->map))
		ft_put_err();
	if (!ft_check_len(game->map) || !ft_check_player(game->map)
		|| !ft_check_ce(game->map))
		ft_put_err();
	game->img_width = ft_strlen(game->map[0]);
	game->img_height = nbr + 1;
}