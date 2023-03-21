/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:57:12 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/13 19:31:33 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 12;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("%d", x);
	printf("%d", y);
	return (0);
}
*/
