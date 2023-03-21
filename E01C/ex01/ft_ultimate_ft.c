/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:09:31 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/13 12:43:46 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
		*********nbr = 42;
}
/*
#include <stdio.h>
int	main(void)
{
	int	x;
	int	*a;
	int	**b;
	int	***c;
	int	****d;
	int	*****e;
	int	******f;
	int	*******g;
	int	********h;
	int	*********nbr;

	x = 1;
	a = &x;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	nbr = &h;
	ft_ultimate_ft(nbr);
	printf("%d", x);
	return (0);
}
*/
