/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:22:46 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/03/06 03:06:29 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static char	*ft_myline(char *str)
{
	int		i;
	char	*s;

	if (*str == '\0')
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	s = (char *) malloc(sizeof(char) * i + 2);
	if (!s)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		s[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{	
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

static char	*ft_store(char *str)
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free (str);
		return (NULL);
	}
	buff = (char *) malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!buff)
		return (NULL);
	i++;
	while (str[i])
	{
		buff[j++] = str[i];
		i++;
	}
	buff[j] = '\0';
	free (str);
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*new;

	if (fd < 0)
		return (0);
	str = ft_read(str, fd);
	if (!str)
		return (NULL);
	new = ft_myline(str);
	str = ft_store(str);
	return (new);
}

#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int fd = open(av[1], O_RDONLY, 777);
		printf("%s",get_next_line(fd));
	}
}