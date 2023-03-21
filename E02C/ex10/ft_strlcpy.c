/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:04:55 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/19 16:37:47 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



unsigned int ft_strlcpy(char *dest, char *src, unsigned size);
{
	unsigned int i;
	unsigned int x;

	int i = 0;
	while (scr[i] != '\0')
	{
		i = i + 1;
	}
	x = i;
	i = 0;
	
	if (size != '\0')
		while (scr[i] != '\0' && scr[i] < size) 
		{		
			if	(x < size)
				dest[i] = scr[i];
		}
		dest[i] = '\0';
	}
	i = i + 1;
	return(dest)
}

int main(void)
{
	char src[] = "Hola"
	char dest[] = "Caracola"
	ft_strlcpy(scr, dest);
	return(0)
}


