/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:05:28 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/13 14:08:59 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a *= -1;
	}
	if (a < 10)
		ft_putchar (a + '0');
	else
	{
		ft_putnbr (a / 10);
		ft_putnbr (a % 10);
	}
}
