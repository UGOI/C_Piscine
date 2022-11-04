/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:20:18 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/17 17:17:31 by sdukic           ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	char	c;
	int		i;
	int		only_alphabet;
	int		only_alphabet2;

	i = 0;
	only_alphabet = 1;
	while ((i < ft_strlen(str)) && (only_alphabet == 1))
	{
		c = '1';
		only_alphabet2 = 0;
		while ((c <= '9') && (only_alphabet2 == 0))
		{
			if ((str[i] == c))
				only_alphabet2 = 1;
			c++;
		}
		if (only_alphabet2 == 0)
			only_alphabet = 0;
		i++;
	}
	return (only_alphabet);
}
