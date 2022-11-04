/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:21:20 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/17 00:53:32 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	i2;
	int	c;

	i = 1;
	while (i < size)
	{
	i2 = 0;
		while (i2 < (size - 1))
		{
			if (tab[i2] > tab[i2 + 1])
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
