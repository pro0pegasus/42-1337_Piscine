/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:56:40 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/18 01:11:31 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] >= 32 && str[a] <= 126)
		a++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf ("%d\n", ft_str_is_printable("\n"));
	printf ("%d\n", ft_str_is_printable("LFMKLDMSFKN1"));
	printf ("%d\n", ft_str_is_printable(""));
	return 0;
}
*/
