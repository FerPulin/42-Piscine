/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:17:54 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/15 20:36:59 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *scr, unsigned int n);

char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (scr [i] != '\0' && i < n)
	{
		dest [i] = scr [i];
		i = i + 1;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i = i + 1;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char	scr [] = "";
	char	dest [] = "1234";
	char	dest1 [] = "1234";
	int 	n =	3;

	ft_strncpy(dest, scr, n);
	printf("%s\n", dest);
	printf("%s\n", strncpy(dest1, scr, n));
	return (0);
}
*/
