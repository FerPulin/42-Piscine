/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:39:44 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/19 10:54:24 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str [i] + 32;
		}
	i = i + 1;
	}
	return (str);
}
/*

#include <stdio.h>

int main(void)
{
	char	str [] = "ADFGHJK1";
	ft_strlowcase(str);
	printf("%s", str);
	return(0);
}
*/
