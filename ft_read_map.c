/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 03:48:37 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/18 20:20:02 by bmaaqoul         ###   ########.fr       */
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

static char    **ft_read_map1(char **av)
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
    return (str);
}

char    **ft_read_map(t_game *game, char **av)
{
    int     i;
    int     len;
    int     lines;
    char    *tmp;
    char    **str;

    i = 0;
    str = ft_read_map1(av);
    len = ft_strlen(str[0]);
    lines = ft_count_lines(av);
    while (i < lines - 1)
    {
        tmp = str[i];
        str[i] = ft_substr(tmp, 0, len - 1);
        free (tmp);
        i++;
    }
    i++;
    str[i] = NULL;
    game->map = str;
    // game->img_height = ft_strlen(str[0]);
    // game->img_height = lines;
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