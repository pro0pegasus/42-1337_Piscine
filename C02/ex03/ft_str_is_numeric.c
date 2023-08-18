/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:56:50 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/18 00:28:30 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
		a++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf ("%d\n", ft_str_is_numeric ("1234567892454234892"));
	printf ("%d\n", ft_str_is_numeric ("123459a43545"));
	printf ("%d", ft_str_is_numeric (""));
	return 0;
}
*/
