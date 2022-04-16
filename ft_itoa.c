/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:22:11 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/04/15 15:23:30 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_len(long int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n >= 0 && n <= 9)
		return (len);
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	j;
	int			s;

	len = ft_len(n);
	j = n;
	s = 1;
	if (j < 0)
	{
		j = -j;
		s = -1;
	}
	str = (char *) malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = j % 10 + 48;
		j /= 10;
	}
	if (s < 0)
		str[0] = '-';
	return (str);
}