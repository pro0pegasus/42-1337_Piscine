/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:41:44 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/18 00:56:00 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		a++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf ("%d\n", ft_str_is_uppercase("AQDDBNDKDM"));
	printf ("%d\n", ft_str_is_uppercase("LFMKLDMSFKN1"));
	printf ("%d\n", ft_str_is_uppercase(""));
	return 0;
}
*/
