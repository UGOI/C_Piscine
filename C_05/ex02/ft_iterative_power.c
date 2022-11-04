/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:07:40 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/21 18:16:53 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	if (power < 0)
		return (0);
	i = 0;
	nbr = 1;
	while (i < power)
	{
		nbr *= nb;
		i++;
	}
	return (nbr);
}
