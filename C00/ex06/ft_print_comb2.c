/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:39:04 by mliew             #+#    #+#             */
/*   Updated: 2022/04/11 10:39:08 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			ft_putchar(' ');
			ft_putchar('0' + (b / 10));
			ft_putchar('0' + (b % 10));
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int	main()
{
	ft_print_comb2();
}
