/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 03:48:37 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/12 01:27:33 by bmaaqoul         ###   ########.fr       */
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
    close (fd);
    return (i);
}

static void ft_read_map1(char **av, t_game *game)
{
    int     nbr;
    int     fd;

    nbr = ft_count_lines(av);
    if (!nbr)
        ft_put_err();
    fd = open(av[1], O_RDONLY);
    game->map = (char **) malloc(sizeof(char *) * nbr);
    if (!game->map)
        ft_put_err();
    nbr = 0;
    while (1)
    {
        game->map[nbr] = get_next_line(fd);
        if (game->map[nbr] == NULL)
            break;
        nbr++;
    }
    close (fd);
}

char    **ft_read_map(t_game *game, char **av)
{
    int     i;
    int     len;
    int     lines;
    char    *tmp;

    i = 0;
    ft_read_map1(av, game);
    len = ft_strlen(game->map[0]);
    lines = ft_count_lines(av);
    while (i < lines)
    {
        tmp = game->map[i];
        game->map[i] = ft_substr(tmp, 0, len - 1);
        free (tmp);
        i++;
    }
    game->map[i] = NULL;
    return (game->map);
}
// int main(int ac, char **av)
// {
//     t_game *game;
//     int check;
//     char    **str = ft_read_map(game, av);
//     int i = 0;
//     ft_check_map(str);
//     while (str[i])
//     {
//         printf("%s", str[i]);
//         // if (check)
//         //     printf("player\n");
//         // else
//         //     printf("not player\n");
//         i++;
//     }
//     free_tab(str);
// }