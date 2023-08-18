/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:39:05 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/23 03:44:13 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	if (to_find[b] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (str + a);
			a++;
			b = 0;
	}
	return (0);
}
/*
int main()
{
	char src[] = "hoho hh";
	char to_find[] = "hh";
	printf ("%s\n", ft_strstr(src, to_find));
}
*/
