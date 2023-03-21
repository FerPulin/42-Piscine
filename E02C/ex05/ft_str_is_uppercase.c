/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:08:32 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/15 17:34:56 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char	str [] = "ABGFHJK";
	int	resultado = ft_str_is_uppercase(str);

	printf ("%d", resultado);
	return (0);
}
*/
