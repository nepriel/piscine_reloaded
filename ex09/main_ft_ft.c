/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:01:28 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 11:12:10 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb;

		nb = atoi(argv[1]);
		ft_ft(&nb);
		printf("%d", nb);
	}
	return (0);
}
