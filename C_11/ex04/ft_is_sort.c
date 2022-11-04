/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:37:01 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/29 22:24:26 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	rising;
	int	falling;

	i = 0;
	rising = 0;
	falling = 0;
	while (i < (length - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			falling++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			rising++;
		i++;
	}
	if (i == falling || i == rising)
		return (1);
	return (0);
}
