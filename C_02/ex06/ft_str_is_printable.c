/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:53:42 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/19 18:59:03 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	int		only_alphabet;

	i = 0;
	only_alphabet = 1;
	while ((str[i] != '\0') && (only_alphabet == 1))
	{
		if (str[i] < 32 || str[i] > 126)
			only_alphabet = 0;
		i++;
	}
	return (only_alphabet);
}
