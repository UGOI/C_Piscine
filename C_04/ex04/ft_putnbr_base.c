/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:21:24 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/20 21:05:09 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_get_str_legth(char *str)
{
	int	res;

	res = 0;
	while (str[res])
		res++;
	return (res);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_get_str_legth(base) <= 1)
		return (0);
	i = 0;
	j = 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' )
			return (0);
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!ft_check_base(base))
		return ;
	if (nbr == -2147483648)
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr >= ft_get_str_legth(base))
		ft_putnbr_base(nbr / ft_get_str_legth(base), base);
	write(1, &base[nbr % ft_get_str_legth(base)], 1);
}
