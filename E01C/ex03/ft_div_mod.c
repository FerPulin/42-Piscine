/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:48:37 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/13 18:54:25 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
   
int	main(void)
{
	int	a;
	int	b;
	int	x;
	int	y;

	a = 11;
	b = 2;
	ft_div_mod(a, b, &x, &y);
	printf("%d", x);
	printf("%d", y);
	return (0);
}
*/
