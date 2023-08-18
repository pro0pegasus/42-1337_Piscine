/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 02:00:04 by yaborak           #+#    #+#             */
/*   Updated: 2023/08/02 06:28:14 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_length;

    dest_length = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dest[dest_length] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_empty_string(void)
{
	char	*empty_string;

	empty_string = (char *)malloc(sizeof(char));
	if (empty_string != 0)
		empty_string[0] = '\0';
	return (empty_string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		length;
	char	*new_string;

	if (size == 0)
		return (ft_empty_string());
	length = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
		length = length + ft_strlen(strs[i++]);
	length = length + 1;
	new_string = (char *)malloc(sizeof(char) * length);
	if (new_string == 0)
		return (0);
	ft_strcpy(new_string, strs[0]);
	j = 1;
	while (j < size)
	{
		ft_strcat(new_string, sep);
		ft_strcat(new_string, strs[j]);
		j++;
	}
	return (new_string);
}
/*
int	main()
{	
	char *arr[4];
	char *ptr;
	arr[0] = "proh";
	arr[1] = "ibit";
	arr[2] = "edpe";
	arr[3] = "gasu";
	char sep[] = " ";
	ptr = ft_strjoin(4, arr, sep);
	printf("%s", ptr);
	free (ptr);
}
*/
