/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alpabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:00:53 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 10:08:56 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char i;

	i = 'a';
	while (i != ('z' + 1))
	{
		ft_putchar(i);
		i++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
