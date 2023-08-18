/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:11:05 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/18 00:18:53 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A' && str[a] <= 'Z')
			|| (str[a] >= 'a' && str[a] <= 'z'))
		a++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf ("%d\n", ft_str_is_alpha("abcdefgHWODKhhd"));
	printf ("%d", ft_str_is_alpha(""));
}
*/
