/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:01:16 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/27 18:06:21 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char text)
{	
	write(1, &text, 1);
}

void	ft_putstr(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
	{
		ft_putchar(text[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
	return ;
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		ac;
	int		i;

	ac = 0;
	while (par[ac].size)
		ac++;
	i = -1;
	while (++i < ac)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
	}
}
