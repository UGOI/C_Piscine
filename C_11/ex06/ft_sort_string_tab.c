/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:12:38 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/29 18:33:58 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		i2;
	char	*c;

	i = 0;
	while (tab[i])
	{
	i2 = 0;
		while (tab[i2 + 1])
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
