/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:58:45 by hlabib            #+#    #+#             */
/*   Updated: 2025/08/17 23:35:17 by hlabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main(void)
{
	int x , y ;
	x= 10;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
}*/
