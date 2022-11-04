/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:35:34 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/29 19:27:13 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[i2], tab[i2 + 1]) > 0)
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
