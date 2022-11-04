/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:53:48 by sdukic            #+#    #+#             */
/*   Updated: 2022/09/23 19:04:02 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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

int	main(int argc, char *argv[])
{
	(void)argc;
	ft_putstr(argv[0]);
	ft_putstr("\n");
	return (0);
}
