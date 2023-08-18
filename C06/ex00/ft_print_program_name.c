/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:56:37 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/25 21:19:51 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;

	(void)argc;
	a = 0;
	while (argv[0][a] != '\0' && argc)
	{
		ft_putchar (argv[0][a]);
		a++;
	}
	ft_putchar ('\n');
	return (0);
}
