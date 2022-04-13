/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 23:08:22 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/13 18:01:06 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*t;

	if (!s1)
	{
		s1 = (char *) malloc(1);
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	k = ft_strlen(s1) + ft_strlen(s2);
	i = -1;
	j = -1;
	t = (char *) malloc(sizeof(char) * k + 1);
	if (!t)
		return (NULL);
	while (s1[++i])
		t[i] = s1[i];
	while (s2[++j])
		t[i++] = s2[j];
	t[i] = '\0';
	free (s1);
	return (t);
}

char	*ft_read(char	*str, int fd)
{
	char	*buff;
	int		r;

	r = 1;
	buff = (char *) malloc(2);
	if (!buff)
		return (NULL);
	while (!ft_strchr(str, '\n') && r != 0)
	{
		r = read(fd, buff, 1);
		if (r < 0)
		{
			free (buff);
			return (NULL);
		}
		buff[r] = '\0';
		str = ft_strjoin(str, buff);
	}
	free (buff);
	return (str);
}
