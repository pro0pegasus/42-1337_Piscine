/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:29:03 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/18 00:43:15 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		a++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf ("%d\n", ft_str_is_lowercase("abcdrklngfkdn"));
	printf ("%d\n", ft_str_is_lowercase("njfjkjd1"));
	printf ("%d\n", ft_str_is_lowercase(""));
	return 0;
}
*/
