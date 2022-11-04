/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:09:58 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/15 20:50:25 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_get_n_of_digits(int i)
{
	int	n_of_digits;
	int	untampered_digit;

	untampered_digit = i;
	n_of_digits = 0;
	while (i > 0)
	{
		n_of_digits++;
		i /= 10;
	}
	if (untampered_digit == 0)
	{
		n_of_digits = 1;
	}
	return (n_of_digits);
}

void	ft_split_num(int i, int *arr)
{
	int	index;
	int	untampered_digit;
	int	digit;
	int	n_of_digits;

	n_of_digits = ft_get_n_of_digits(i);
	untampered_digit = i;
	index = n_of_digits - 1;
	while (i > 0)
	{
		digit = i % 10;
		arr[index] = digit;
		i /= 10;
		index--;
	}
	if (untampered_digit == 0)
	{
		arr[untampered_digit] = 0;
	}
}

void	ft_number_to_string(int nb, char *string)
{
	int	n_of_digits;
	int	digit;
	int	arr[10];

	n_of_digits = ft_get_n_of_digits(nb);
	digit = 0;
	ft_split_num(nb, arr);
	while (digit < n_of_digits)
	{
		string[digit] = arr[digit] + '0';
		digit++;
	}
	string[n_of_digits] = '\0';
}

void	ft_putnbr(int nb)
{
	char	string[10 + 1];

	ft_number_to_string(nb, string);
	ft_putstr(string);
}
