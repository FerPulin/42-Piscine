/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:52:59 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/20 10:47:09 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
	i = i + 1;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "2345678";
	int	resultado = ft_str_is_numeric(str);
	printf("%d", resultado);
	return (0);
}
*/
