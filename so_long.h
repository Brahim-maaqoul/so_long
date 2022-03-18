/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:56:05 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/18 06:31:47 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_player
{
    int x;
    int y;
}           t_player;


typedef struct s_game
{
    t_player    player;
    void        *mlx;
    void        *window;
    char        **map;
    char        *wall;
    char        *path;
    int         width;
    int         height;
    int         steps;
}           t_game;




char    **ft_read_map(t_game game, char **av);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
char	*ft_strchr(char *str, int c);
char	*ft_read(char	*str, int fd);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
void    ft_put_err(void);
void    ft_check_map(char **str);
void	free_tab(char **tab);
int     ft_check_ce(char **str);

# endif