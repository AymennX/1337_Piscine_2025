/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochiguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:18:09 by ochiguer          #+#    #+#             */
/*   Updated: 2025/08/17 17:12:36 by ochiguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == 1 && j == x)
				|| (i == y && j == 1) || (i == y && j == x))
				ft_putchar('o');
			else if ((i == 1 || i == y) && (j > 1 && j < x))
				ft_putchar('-');
			else if ((j == 1 || j == x) && (i > 1 && i < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
