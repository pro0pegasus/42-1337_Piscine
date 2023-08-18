/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:48:53 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/24 02:15:27 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	spaces(char *str, int *ptr_a)
{
	int	counter;
	int	a;

	a = 0;
	counter = 1;
	while ((str[a] >= 9 && str[a] <= 13)
		|| str[a] == 32)
			a++;
	while ((str[a] == 43 || str[a] == 45))
	{
		if (str[a] == 45)
			counter *= -1;
			a++;
	}
	*ptr_a = a;
	return (counter);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	a;

	res = 0;
	sign = spaces(str, &a);
	while (str[a] && str[a] >= 48 && str[a] <= 57)
	{
		res *= 10;
		res += str[a] - 48;
		a++;
	}
	res *= sign;
	return (res);
}
/*
int main()
{
	char str[] = " ---+--+1234ab567";
	printf ("%d",ft_atoi(str));
}
*/
