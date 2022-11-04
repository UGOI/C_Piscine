/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:25:14 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/17 17:39:09 by sdukic           ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	char	c;
	int		i;
	int		only_alphabet;
	int		only_alphabet2;

	i = 0;
	only_alphabet = 1;
	while ((i < ft_strlen(str)) && (only_alphabet == 1))
	{
		c = 'a';
		only_alphabet2 = 0;
		while ((c <= 'z') && (only_alphabet2 == 0))
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
