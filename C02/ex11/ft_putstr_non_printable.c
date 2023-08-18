/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:53:40 by yaborak           #+#    #+#             */
/*   Updated: 2023/08/02 00:01:25 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && err == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		ft_put_hexa(c / 16, 1);
		ft_put_hexa(c % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a])
	{
		if (str[a] < 32 || str[a] == 127)
		{
			ft_putchar('\\');
			b = str[a];
			ft_put_hexa(b, 0);
		}
		else
		{
			ft_putchar(str[a]);
		}
		a++;
	}
}
/*
int		main()
{
	char	*str;

	str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
*/
