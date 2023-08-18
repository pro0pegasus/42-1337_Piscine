/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:30:34 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/23 03:34:30 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	a;

	a = 0;
	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
/*
int main()
{
	printf ("%d\n", ft_strcmp("prohibited", "pegasus"));
	printf ("%d\n", ft_strcmp("hh", "hhh"));
	printf ("%d\n", ft_strcmp("pp","pp"));
}
*/
