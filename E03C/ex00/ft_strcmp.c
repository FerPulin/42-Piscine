/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:14:37 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/20 16:45:54 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)

{
	printf("%d", ft_strcmp("Hola", "Hola1"));
	printf("\n%d", ft_strcmp("Hola", "Ho"));
	printf("\n%d", ft_strcmp("Ho", "Hola"));
	printf("\n%d", ft_strcmp("Hola", "Hola"));
}
*/
