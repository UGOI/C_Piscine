/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:57:58 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/29 16:21:36 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int	do_op(char *argv[])
{
	if (*argv[2] == '+')
		return (ft_atoi(argv[1]) + ft_atoi(argv[3]));
	if (*argv[2] == '-')
		return (ft_atoi(argv[1]) - ft_atoi(argv[3]));
	if (*argv[2] == '/')
		return (ft_atoi(argv[1]) / ft_atoi(argv[3]));
	if (*argv[2] == '%')
		return (ft_atoi(argv[1]) % ft_atoi(argv[3]));
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (*argv[2] == '/')
		{
			if (ft_atoi(argv[3]) == 0)
			{
				ft_putstr("Stop : division by zero\n");
				return (0);
			}	
		}
		if (*argv[2] == '%')
		{
			if (ft_atoi(argv[3]) == 0)
			{
				ft_putstr("Stop : modulo by zero\n");
				return (0);
			}	
		}
		ft_putnbr(do_op(argv));
		ft_putchar('\n');
	}
	return (0);
}
