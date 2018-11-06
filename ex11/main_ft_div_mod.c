/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:37:56 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 11:44:19 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(int argc, char **argv)
{
	int nb;
	int nb2;
	int res;
	int rest;

	res = 0;
	rest = 0;
	if (argc == 3)
	{
		nb = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		ft_div_mod(nb, nb2, &res, &rest);
		printf("%d / %d = %d, rest %d", nb, nb2, res, rest);
	}
	return (0);
}
