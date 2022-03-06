/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:56:05 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/06 04:19:27 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include <fcntl.h>

typedef struct s_player
{
    int x;
    int y;
}           t_player;


typedef struct s_game
{
    t_player    player;
    char        **map;
    char        *wall;
    char        *path;
    int         width;
    int         height;
}           t_game;





char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
char	*ft_strchr(char *str, int c);
char	*ft_read(char	*str, int fd);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);

# endif