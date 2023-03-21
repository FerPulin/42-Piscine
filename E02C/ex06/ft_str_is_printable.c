/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:39:06 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/15 18:15:25 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
	i = i + 1;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char	str [] = "hyuukkskskskl?";
	int	devuelve = ft_str_is_printable(str);
	ft_str_is_printable(str);
	printf("%d", devuelve);
	return (0);
	}
*/
