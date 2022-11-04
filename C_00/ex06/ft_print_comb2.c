/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:38:53 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/15 14:01:17 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_split_number(int i, int *arr)
{
	arr[0] = (i / 1000 % 10) * 10 + (i / 100 % 10);
	arr[1] = (i / 10 % 10) * 10 + (i % 10);
}

void	ft_split_num_2d(int i, int *arr)
{
	arr[0] = (i / 10 % 10);
	arr[1] = (i % 10);
}

void	ft_putstr(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
	{
		write(1, &text[i], 1);
		i++;
	}
}

void	ft_make_string(int *split_num, char *arr)
{
	int	num1[2];
	int	num2[2];

	ft_split_num_2d(split_num[0], num1);
	ft_split_num_2d(split_num[1], num2);
	arr[0] = num1[0] + '0';
	arr[1] = num1[1] + '0';
	arr[2] = ' ';
	arr[3] = num2[0] + '0';
	arr[4] = num2[1] + '0';
	arr[5] = '\0';
}

void	ft_print_comb2(void)
{
	char	arr[6];
	int		split_num[2];
	int		number;

	number = 0001;
	while (number != 9899)
	{
		ft_split_number(number, split_num);
		ft_make_string(split_num, arr);
		if ((split_num[0] != split_num[1])
			&& (split_num[0] < split_num[1]))
		{
			ft_putstr(arr);
			write(1, ",", 1);
			write(1, " ", 1);
			number ++;
		}
		else
		{
			number++;
		}
	}
	ft_putstr("98 99");
}
