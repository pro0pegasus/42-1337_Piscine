/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:48:19 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/29 23:04:15 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		ft_putchar(str[a++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] == s2[a])
			a++;
		if (s1[a] < s2[a] || s1[a] > s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;

	b = 1;
	while (b < argc - 1)
	{
		a = 1;
		while (a < argc - 1)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				ft_swap(&argv[a], &argv[a + 1]);
			}
			a++;
		}
		b++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
