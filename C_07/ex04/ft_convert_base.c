/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:15:43 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/26 18:55:12 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_i_of_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	num;

	if (!ft_check_base(base))
		return (0);
	i = 0;
	sign = 1;
	num = 0;
	while (str[i] <= '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_is_in_base(str[i], base))
	{
		num = num * ft_get_str_legth(base) + ft_i_of_base(base, str[i]);
		i++;
	}
	return (num * sign);
}
