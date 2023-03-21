/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <fpulin-v@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:39:54 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/03/21 11:45:01 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j = j + 1;
		if (to_find[j] == '\0')
			return (str + i);
		i = i + 1;
		j = 0;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str[];
	char	find[];

	str[] = "123 456 Dentro de un momento";
	find[] = "momento";
	printf("%s", ft_strstr(str, find));
}
