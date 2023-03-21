/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:18:58 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/15 17:06:56 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char	str [] = "abdcffeffe";
	int	resultado = ft_str_is_lowercase(str);	
	printf ("%s", resultado);
	return (0);
}
*/
