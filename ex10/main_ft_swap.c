/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:19:51 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 11:29:29 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(int argc, char **argv)
{
	int nb;
	int nb2;

	if (argc == 3)
	{
		nb = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		ft_swap(&nb, &nb2);
		printf("%d, %d", nb, nb2);
	}
	return (0);
}
