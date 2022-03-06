/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 03:48:37 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/06 04:13:46 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int  ft_count_lines(char **av)
{
    int     i;
    int     fd;
    char    *str;
    
    i = 0;
    fd = open(av[1], O_RDONLY);
    while (1)
    {
        str = get_next_line(fd);
        if (str == NULL)
            break ;
        free (str);
        i++;
    }
    return (i);
}

