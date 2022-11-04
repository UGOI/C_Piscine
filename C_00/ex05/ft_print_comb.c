/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:12:51 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/15 12:36:31 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_split_number(int i, int *arr)
{
	arr[0] = i / 100 % 10;
	arr[1] = i / 10 % 10;
	arr[2] = i % 10;
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
		arr[0] = split_num[0] + '0';
		arr[1] = split_num[1] + '0';
		arr[2] = split_num[2] + '0';
		arr[3] = '\0';
}

void	ft_print_comb(void)
{
	char	arr[4];
	int		split_num[3];
	int		number;

	number = 012;
	while (number != 789)
	{
		ft_split_number(number, split_num);
		ft_make_string(split_num, arr);
		if ((arr[0] != arr[1] && arr[0] != arr[2] && arr[1] != arr[2])
			&& (arr[0] < arr[1] && arr[0] < arr[2] && arr[1] < arr[2]))
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
	ft_putstr("789");
}
