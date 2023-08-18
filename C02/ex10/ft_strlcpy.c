/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:19:19 by yaborak           #+#    #+#             */
/*   Updated: 2023/08/02 00:29:05 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	z;

	z = ft_strlen(src);
	a = 0;
	if (size != 0)
	{
		while (src [a] != '\0' && a < size - 1)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (z);
}
/*
int	main()
{
	char src[] = "Pegasus";
	char dest[] = "hh ";
	printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}
*/
