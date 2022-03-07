/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 03:48:37 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/07 22:40:52 by bmaaqoul         ###   ########.fr       */
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

char    **ft_read_map(t_game game, char **av)
{
    int     nbr;
    int     fd;
    char    **str;
    
    nbr = ft_count_lines(av);
    if (!nbr)
        return (NULL);
    fd = open(av[1], O_RDONLY);
    str = (char **) malloc(sizeof(char *) * nbr);
    if (!str)
        return (NULL);
    nbr = 0;
    while (1)
    {
        str[nbr] = get_next_line(fd);
        if (str[nbr] == NULL)
            break;
        nbr++;
    }
    close (fd);
    game.map = str;
    free (str);
    return (game.map);
}

// int main(int ac, char **av)
// {
//     t_game game;
//     char    **str = ft_read_map(game, av);
//     int i = 0;
//     while (str[i])
//     {
//         printf("%s", str[i]);
//         i++;
//     }
// }