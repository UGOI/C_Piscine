/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:45:21 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/17 19:50:23 by sdukic           ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	char	c;
	char	c_u;
	int		i;
	int		stop_character_loop2;

	i = 0;
	while ((i < ft_strlen(str)))
	{
		c = 'a';
		c_u = 'A';
		stop_character_loop2 = 0;
		while ((c_u <= 'Z') && (stop_character_loop2 == 0))
		{
			if (str[i] == c_u)
			{
				stop_character_loop2 = 1;
				str[i] = c;
			}
			c++;
			c_u++;
		}
		i++;
	}
	return (str);
}
