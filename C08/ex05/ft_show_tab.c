/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 22:40:53 by yaborak           #+#    #+#             */
/*   Updated: 2023/08/01 02:06:37 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	long	a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a *= -1;
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned int	a;

	a = -1;
	while (par[++a].str != 0)
	{
		ft_putstr(par[a].str);
		ft_putchar('\n');
		ft_putnbr(par[a].size);
		ft_putchar('\n');
		ft_putstr(par[a].copy);
		ft_putchar('\n');
	}
}
