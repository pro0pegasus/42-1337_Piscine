/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:12:59 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/23 19:46:35 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
/*
int	main()
{
	ft_putnbr(42);
}
*/
