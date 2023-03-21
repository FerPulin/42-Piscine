/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:42:47 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/19 17:26:29 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	pos_a;
	int	pos_b;

	pos_a = 0;
	while (pos_a < 99)
	{
		pos_b = pos_a + 1;
		while (pos_b <= 99)
		{
			ft_putchar(pos_a / 10 + '0');
			ft_putchar(pos_a % 10 + '0');
			write (1, " ", 1);
			ft_putchar(pos_b / 10 + '0');
			ft_putchar(pos_b % 10 + '0');
			if (!(pos_a == 98 && pos_b == 99))
				write (1, ", ", 2);
		pos_b = pos_b + 1;
		}
	pos_a = pos_a + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
