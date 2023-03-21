/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:16:43 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/19 20:48:27 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] = str[i] - 32;
		}
	i = i + 1;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "kkjgjgjkgasgysg";
	ft_strupcase(str);
	printf ("%s", str);
	return (0);
}
*/
