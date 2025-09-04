/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:15:13 by hlabib            #+#    #+#             */
/*   Updated: 2025/08/16 21:59:09 by hlabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
