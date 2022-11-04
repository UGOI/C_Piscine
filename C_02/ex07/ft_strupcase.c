/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:17:22 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/17 19:42:35 by sdukic           ###   ########.fr       */
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

char	*ft_strupcase(char *str)
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
		while ((c <= 'z') && (stop_character_loop2 == 0))
		{
			if (str[i] == c)
			{
				stop_character_loop2 = 1;
				str[i] = c_u;
			}
			c++;
			c_u++;
		}
		i++;
	}
	return (str);
}
