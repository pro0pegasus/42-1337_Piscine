/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:21:20 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/28 21:22:30 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	a;
	int	prime;

	a = 2;
	prime = 0;
	if (nb < 2)
		return (0);
	if (nb == a)
		return (1);
	while (a <= nb / 2)
	{
		if (nb % a == 0)
			prime++;
		a++;
	}
	if (prime == 0)
		return (1);
	else
		return (0);
}
