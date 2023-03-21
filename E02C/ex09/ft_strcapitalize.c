/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:02:01 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/18 20:44:15 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_min(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i = i + 1;
	}
	i = 0;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	t;

	i = 0;
	t = 1;
	ft_min(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (t == 1)
			{
				str[i] -= 32;
				t = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			t = 0;
		}
		else
			t = 1;
		i = i + 1;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
