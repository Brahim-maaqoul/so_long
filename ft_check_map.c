/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:37:57 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/08 08:18:36 by bmaaqoul         ###   ########.fr       */
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
    while (str[i][j])
    {
        if (str[i][j] == '-' || str[i][j] == '+')
            return (0);
        j++;
    }
    if (str[i][0] != '1' || str[i][len] != '1')
        return (0);
    return (1);
}

int  ft_check_len(char **str)
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

