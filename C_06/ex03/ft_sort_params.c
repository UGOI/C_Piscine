/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:57:44 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/23 19:45:42 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		i2;
	char	*c;

	i = 1;
	while (i < size)
	{
	i2 = 0;
		while (i2 < (size - 1))
		{
			if (ft_strcmp(tab[i2], tab[i2 + 1]) > 0)
			{
				c = tab[i2];
				tab[i2] = tab[i2 + 1];
				tab[i2 + 1] = c;
			}
			i2++;
		}
		i++;
	}
}

void	ft_putstr(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
	{
		write(1, &text[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_int_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
