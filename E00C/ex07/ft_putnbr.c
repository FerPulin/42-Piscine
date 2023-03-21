/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:30:53 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/19 20:24:23 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = -nb;
		write (1, "-", 1);
		write (1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
		ft_putnbr(nb);
	}
	else if (nb >= 0 && nb <= 9)
	{	
		ft_putchar(48 + nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(48 + (nb % 10));
	}
}
/*
int	main(void)
{
	int nb = 2735;
	ft_putnbr(nb);
	return (0);
}
*/
