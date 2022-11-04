/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 00:25:00 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/19 12:37:47 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	int				i2;
	int				does_match;
	char			*p_int;

	i = 0;
	does_match = 0;
	p_int = 0;
	while ((i <= (ft_strlen(str) - ft_strlen(to_find))) && does_match == 0)
	{
		does_match = 1;
		i2 = 0;
		while (i2 < ft_strlen(to_find))
		{
			if (!(str[i2 + i] == to_find[i2]))
				does_match = 0;
			i2++;
		}
		if (does_match == 1)
			return (str + i2 + i - ft_strlen(to_find));
		i++;
		i2++;
	}
	return (p_int);
}
