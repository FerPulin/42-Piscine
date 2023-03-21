/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:07:56 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/12 11:43:55 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	negativo;
	char	positivo;

	negativo = 'N';
	positivo = 'P';
	if (n >= 0)
	{	
		write (1, &positivo, 1);
	}	
	else
	{	
		write (1, &negativo, 1);
	}
}
