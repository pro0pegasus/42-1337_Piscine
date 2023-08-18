/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:55:35 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/16 03:04:50 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf ("%d\n", div);
	printf("%d", mod);
	return 0;
}
*/
