/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:58:43 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/17 00:19:13 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev_tab[100];
	int	rev_i;
	int	i;

	rev_i = size - 1;
	i = 0;
	while (rev_i >= 0)
	{
		rev_tab[i] = tab[rev_i];
		i++;
		rev_i--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = rev_tab[i];
		i++;
	}
}
