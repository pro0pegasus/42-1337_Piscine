/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:26:47 by yaborak           #+#    #+#             */
/*   Updated: 2023/08/02 00:37:46 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
				ft_swap(tab + a, tab + b);
			b++;
		}
		a++;
	}
}
/*
int	main()
{
	int tab[4] = {6, 1, 8, 3};
	int size = 4;

	ft_sort_int_tab(tab, size);
	printf ("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}
*/
