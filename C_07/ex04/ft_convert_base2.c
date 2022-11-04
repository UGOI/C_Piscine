/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:18:06 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/26 23:01:45 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	ft_check_base(char *base);

int	ft_get_str_legth(char *str);

char	*ft_putnbr_base(int nbr, char *base, int *pIn_count, char *res)
{
	long	lnbr;

	lnbr = (long)nbr;
	if (lnbr < 0 && *pIn_count == 0)
	{
		lnbr *= -1;
		res[0] = '-';
		*pIn_count = *pIn_count + 1;
	}
	if (lnbr >= ft_get_str_legth(base))
		ft_putnbr_base(lnbr / ft_get_str_legth(base), base, pIn_count, res);
	res[*pIn_count] = base[lnbr % ft_get_str_legth(base)];
	*pIn_count = *pIn_count + 1;
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*res;
	long int	int_from_base;
	char		char_to_base[100];
	int			i;
	int			pin_count;

	pin_count = 0;
	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	int_from_base = ft_atoi_base(nbr, base_from);
	ft_putnbr_base(int_from_base, base_to, &pin_count, char_to_base);
	i = 0;
	res = malloc((ft_get_str_legth(char_to_base) + 1) * sizeof(char));
	while (i < ft_get_str_legth(char_to_base))
	{
		res[i] = char_to_base[i];
		i++;
	}
	return (res);
}
