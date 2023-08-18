/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:51:12 by yaborak           #+#    #+#             */
/*   Updated: 2023/08/02 02:37:17 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*(str + a) != '\0')
		a++;
	return (a);
}

char	*ft_strcpy(char *str)
{
	char	*dest;
	int		a;

	a = 0;
	while (str[a])
		a++;
	dest = (char *)malloc(sizeof(char) * (a + 1));
	a = 0;
	if (!(dest))
		return (NULL);
	while (str[a])
	{
		dest[a] = str[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			a;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(stock))
		return (NULL);
	a = 0;
	while (a < ac)
	{
		stock[a].size = ft_strlen(av[a]);
		stock[a].str = av[a];
		stock[a].copy = ft_strcpy(av[a]);
		a++;
	}
	stock[a].size = 0;
	stock[a].str = 0;
	stock[a].copy = 0;
	return (stock);
}
/*
int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}
*/
