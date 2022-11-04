/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:22:36 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/25 22:24:31 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*res;
	int	i;
	int	num;

	if (min >= max)
		return (NULL);
	size = max - min;
	i = 0;
	num = min;
	res = (int *) malloc(size * sizeof(*res));
	while (num < max)
	{
		res[i] = num;
		i++;
		num++;
	}
	return (res);
}
