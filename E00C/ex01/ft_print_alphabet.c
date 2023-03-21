/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpulin-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:20:52 by fpulin-v          #+#    #+#             */
/*   Updated: 2023/02/12 11:25:55 by fpulin-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	alpha;

		alpha = 'a';
	while (alpha <= 'z')
	{
		write (1, &alpha, 1);
		alpha = alpha + 1;
	}
}
