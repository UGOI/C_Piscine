/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:14:47 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/29 00:02:32 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

#define TERMINATOR_LEN 1

int	ft_is_sep(char *str, char *charset)
{
	while (*charset)
	{
		if (*str == *charset++)
			return (1);
	}
	return (0);
}

int	ft_str_len(char *str, char *charset)
{
	int	fragm_len;

	fragm_len = 0;
	while (str[fragm_len] && !ft_is_sep(str + fragm_len, charset))
		fragm_len++;
	return (fragm_len);
}

int	ft_amount_of_strings(char *str, char *charset)
{
	int	i;
	int	amount_of_strings;

	amount_of_strings = 0;
	while (*str)
	{
		while (*str && ft_is_sep(str, charset))
			str++;
		i = ft_str_len(str, charset);
		str += i;
		if (i)
			amount_of_strings++;
	}
	return (amount_of_strings);
}

char	*ft_cpy(char *src, int len)
{
	char	*res;

	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len--)
		res[len] = src[len];
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char			**res;
	int				amount_of_strings;
	int				str_index;
	int				str_len;		

	amount_of_strings = ft_amount_of_strings(str, charset);
	res = malloc(sizeof(char *) * (amount_of_strings + TERMINATOR_LEN));
	if (!res)
		return (NULL);
	str_index = 0;
	while (str_index < amount_of_strings)
	{
		while (*str && ft_is_sep(str, charset))
			str++;
		str_len = ft_str_len(str, charset);
		res[str_index] = ft_cpy(str, str_len);
		if (!res[str_index])
			return (NULL);
		str += str_len;
		str_index++;
	}
	res[amount_of_strings] = 0;
	return (res);
}
