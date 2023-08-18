/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 02:38:37 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/31 02:44:55 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	arr_size(int min, int max)
{
	int	a;

	a = 0;
	if (min >= max)
		return (-1);
	while (min < max)
	{
		a++;
		min++;
	}
	return (a);
}

int	*ft_range(int min, int max)
{
	int	*arr;
	int	a;
	int	len;

	a = 0;
	len = arr_size(min, max);
	if (len < 0)
		return (0);
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (0);
	while (min < max)
	{
		arr[a] = min;
		a++;
		min++;
	}
	return (arr);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	a = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(a < size)
	{
		printf("%d, ", tab[a]);
		a++;
	}

}
*/
