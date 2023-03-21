/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:06:03 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/22 23:10:49 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	digit;
	int	i;

	digit = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str [i] <= 13))
		i = i + 1;
	while (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			sign = sign * (-1);
		i = i + 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		digit = digit * 10;
		digit = digit + str[i] - '0';
		i = i + 1;
	}
	return (digit * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "----++---34567abc";
	printf("%d", ft_atoi(str));
	return(0);
}
*/
