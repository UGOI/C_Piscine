/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 01:25:51 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/29 19:34:56 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	res = malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		res[i] = (*f)(tab[i]);
	return (res);
}
