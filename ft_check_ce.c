/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 06:31:56 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/18 06:34:29 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_check_ce(char **str)
{
    int i;
    int j;
    int c;
    int e;

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