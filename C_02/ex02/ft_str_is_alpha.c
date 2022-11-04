/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:43:10 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/17 16:09:46 by sdukic           ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	char	c;
	char	c_cap;
	int		i;
	int		only_alphabet;
	int		only_alphabet2;

	i = 0;
	only_alphabet = 1;
	while ((i < ft_strlen(str)) && (only_alphabet == 1))
	{
		c = 'a';
		c_cap = 'A';
		only_alphabet2 = 0;
		while ((c <= 'z') && (only_alphabet2 == 0))
		{
			if ((str[i] == c) || (str[i] == c_cap))
				only_alphabet2 = 1;
			c++;
			c_cap++;
		}
		if (only_alphabet2 == 0)
			only_alphabet = 0;
		i++;
	}
	return (only_alphabet);
}
