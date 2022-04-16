/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:56:05 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/16 22:47:14 by bmaaqoul         ###   ########.fr       */
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
	int	x;
	int	y;
}		t_player;

typedef struct s_game
{
	t_player	playerrrr;
	void		*mlx;
	void		*window;
	void		*player;
	void		*coin;
	void		*door;
	void		*ground;
	void		*wall;
	void		*enemy;
	char		**map;
	char		*p_wall;
	char		*p_enemy;
	char		*p_coin;
	char		*p_player;
	char		*p_ground;
	char		*p_door;
	void		*path;
	int			img_width;
	int			img_height;
	int			collected;
	int			steps;
}		t_game;

char	**ft_read_map(t_game *game, char **av);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
char	*ft_strchr(char *str, int c);
char	*ft_read(char	*str, int fd);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_put_err(int i);
void	ft_check_map(t_game *game);
void	free_tab(t_game *game);
int		ft_check_ce(char **str);
void	ft_images(t_game *game);
void	ft_player(t_game *game, int i, int j);
void	ft_coin(t_game *game, int i, int j);
void	ft_door(t_game *game, int i, int j);
void	ft_wall(t_game *game, int i, int j);
void	ft_ground(t_game *game, int i, int j);
void	ft_draw_map(t_game *game);
void	ft_map(t_game *game);
int		ft_count_coins(t_game *game);
void	ft_putstr_fd(char *s, int fd);
void	ft_check_extension(char *av);
int		ft_move(int key, t_game *game);
void	ft_print_steps(t_game *game, int i, int j, char c);
int		ft_close(void);
void	ft_change_player(t_game *game);
void	ft_check_map_bonus(t_game *game);
void	ft_enemy(t_game *game, int i, int j);
void	ft_image_bonus(t_game *game);
int		ft_move_bonus(int key, t_game *game);
void	ft_draw_map_bonus(t_game *game);
void	ft_print_steps_bonus(t_game *game, int i, int j, char c);
void	ft_check_image_path(char *path);
char	*ft_itoa(int n);
void	ft_player_bonus(t_game *game, int i, int j);
void	ft_change_coin(t_game *game);
int		ft_move_enemy(t_game *game);
void	ft_rotate_coin(t_game *game, int i, int j);

#endif