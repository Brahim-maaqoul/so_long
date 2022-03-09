/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:37:57 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/09 06:43:18 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int  ft_check_walls(char **str, int i)
{
    int j;

    j = 0;
    while (str[i][j] && str[i][j] != '\n')
    {
        if (str[i][j] != '1')
            return (0);
        j++;
    }
    return (1);
}

int  ft_check_rocks(char **str, int i)
{
    int len;
    int j;

    j = 0;
    len = ft_strlen(str[i]) - 1;
    while (str[i][j] && str[i][j] != '\n')
    {
        if ((str[i][j] != '1' && str[i][j] != '0')
            && (str[i][j] != 'C' && str[i][j] != 'E'))
            return (0);
        j++;
    }
    if (str[i][0] != '1' || str[i][len] != '1')
        return (0);
    return (1);
}

static int  ft_check_len(char **str)
{
    int i;
    int j;

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

static int ft_check_player(char **str)
{
    int i;
    int j;
    int p;

    i = 0;
    p = 0;
    while (str[i])
    {
        j = 0;
        while (str[i][j] && str[i][j] != '\n')
        {
            if (str[i][j] == 'P')
                p++;
            j++;
        }
        i++;
    }
    if (p != 1)
        return (0);
    return (1);
}