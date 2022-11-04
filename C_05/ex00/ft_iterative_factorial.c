/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:25:44 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/21 18:03:32 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nbr;

	if (nb < 0)
		return (0);
	i = 1;
	nbr = 1;
	while (i <= nb)
	{
		nbr *= i;
		i++;
	}
	return (nbr);
}
