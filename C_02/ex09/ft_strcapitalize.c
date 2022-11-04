/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:02:01 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/19 21:13:00 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (i == 0 && (str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] -= 32;
			i++;
		}
		else if (i > 0 && (str[j] >= 'A' && str[j] <= 'Z'))
			str[j] += 32;
		else if ((str[j] < '0') || (str[j] > '9' && str[j] < 'A')
			|| (str[j] > 'Z' && str[j] < 'a') || (str[j] > 'z'))
			i = 0;
		else
			i++;
		j++;
	}
	return (str);
}
