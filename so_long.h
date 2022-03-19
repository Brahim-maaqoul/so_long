/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:56:05 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/18 23:10:12 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

typedef struct s_game
{
    void        *mlx;
    void        *window;
    void        *player;
    void        *coin;
    void        *door;
    void        *ground;
    void        *wall;
    char        **map;
    char        *p_wall;
    char        *p_coin;
    char        *p_player;
    char        *p_ground;
    char        *p_door;
    void        *path;
    int         x;
    int         y;
    int         img_width;
    int         img_height;
    int         steps;
}           t_game;




char    **ft_read_map(t_game *game, char **av);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
char	*ft_strchr(char *str, int c);
char	*ft_read(char	*str, int fd);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
void    ft_put_err(void);
void    ft_check_map(t_game *game);
void	free_tab(char **tab);
int     ft_check_ce(char **str);
void    ft_images(t_game *game);
void	ft_player(t_game *game, int i, int j);
void	ft_coin(t_game *game, int i, int j);
void	ft_door(t_game *game, int i, int j);
void	ft_wall(t_game *game, int i, int j);
void	ft_ground(t_game *game, int i, int j);
void    ft_draw_map(t_game *game);
void	ft_map(t_game *game);

# endif