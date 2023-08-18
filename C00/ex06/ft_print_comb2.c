/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:01:24 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/12 21:15:41 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_numbers(int no1, int no2)
{
	ft_putchar ((no1 / 10) + '0');
	ft_putchar ((no1 % 10) + '0');
	ft_putchar (' ');
	ft_putchar ((no2 / 10) + '0');
	ft_putchar ((no2 % 10) + '0');
	if (no1 < 98)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb2(void)
{
	int	no1;
	int	no2;

		no1 = 0;
	while (no1 <= 98)
	{
		no2 = no1 + 1;
		while (no2 <= 99)
		{
			print_numbers(no1, no2);
			no2++;
		}
		no1++;
	}
}
