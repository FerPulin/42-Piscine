/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:04:30 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/19 17:06:51 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number [3];

	number [0] = '0';
	number [1] = '1';
	number [2] = '2';
	while (number [0] < '8')
	{
		write (1, &number [0], 3);
		if (number[0] < '7')
			write (1, ", ", 2);
		number [2] = number [2] + 1;
		if (number [2] == ':')
		{
			number [1] = number [1] + 1;
			number [2] = number [1] + 1;
			if (number [1] == '9')
			{
				number [0] = number [0] + 1;
				number [1] = number [0] + 1;
				number [2] = number [1] + 1;
			}
		}
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
