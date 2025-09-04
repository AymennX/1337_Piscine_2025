/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:14:52 by hlabib            #+#    #+#             */
/*   Updated: 2025/08/16 22:07:56 by hlabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(j / 10 + '0');
			ft_putchar(j % 10 + '0');
			if (i != 98)
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
}
