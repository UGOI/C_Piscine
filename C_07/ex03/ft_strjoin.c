/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:00:29 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/26 22:50:54 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (i < size)
		c = c + ft_strlen(strs[i++]);
	if (size > 0)
		c = c + (size - 1) * ft_strlen(sep);
	res = malloc((c + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	c = 0;
	while (i < size)
	{
		ft_strcpy(res + c, strs[i]);
		c = c + ft_strlen(strs[i]);
		if (++i < size)
			c = c + res + c + ft_strlen(sep) - ft_strcpy(res + c, sep);
	}
	res[c] = '\0';
	return (res);
}
