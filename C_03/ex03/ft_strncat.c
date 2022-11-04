/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 00:03:16 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/19 00:20:55 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				end_of_dest;

	i = 0;
	end_of_dest = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[end_of_dest] = src[i];
		i++;
		end_of_dest++;
	}
	dest[end_of_dest] = '\0';
	return (dest);
}
