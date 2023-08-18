/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaborak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:33:58 by yaborak           #+#    #+#             */
/*   Updated: 2023/07/24 23:46:08 by yaborak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	(void)argc;
	a = 1;
	while (argv[a] != NULL )
	{
		b = 0;
		while (argv[a][b] != '\0' )
		{
			ft_putchar (argv[a][b]);
			b++;
		}
		a++;
		ft_putchar ('\n');
	}
}
