/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:18:16 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/23 18:41:03 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[a] == s2[a] && s1[a] != '\0' && a < n - 1)
	{
		a++;
	}
	if (s1[a] == s2[a])
	{
		return (0);
	}
	else
	{
		return (s1[a] - s2[a]);
	}
}
/*
int	main()
{
	printf("%d\n", ft_strncmp("prohibited", "pegasus", 9));
	printf("%d\n", ft_strncmp("Hello", "HelloWorlddddd", 10));
	printf("%d\n", ft_strncmp("pikala", "motor", 3));
}
*/
