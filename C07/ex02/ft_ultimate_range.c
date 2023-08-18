/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 02:28:07 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/31 02:32:23 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	a;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		a = -1;
		while (++a < max - min)
			tab[a] = min + a;
		*range = tab;
		return (a);
	}
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	a = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(a < size)
	{
		printf("%d, ", tab[a]);
		a++;
	}

}
*/
