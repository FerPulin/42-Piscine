/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:46:53 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/23 00:26:45 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char str [] = "Animate";
	int valori = ft_strlen(str);
	printf("%d", valori);
	return (0);
}
*/
