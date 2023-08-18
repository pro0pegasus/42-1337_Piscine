/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:42:16 by yaborak           #+#    #+#             */
/*   Updated: 2023/08/02 01:29:04 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	res_d;
	unsigned int	res_s;

	a = ft_strlen(dest);
	b = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[b] && a < size - 1)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
/*
int main()
{
	char src[] = "pegasus";
	char dest[5] = "haaaa";
	char dest1[6] = "haaaa";
	printf ("%d, %s\n", ft_strlcat(dest, src, 5), dest);
	printf ("%lu, %s\n", strlcat(dest, src, 5), dest1);
}
*/
