/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:57:27 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 12:28:50 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0 && nb < 13)
	{
		while (nb > 1)
		{
			res = res * nb;
			nb--;
		}
	}
	else
		return (0);
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
	}
	return (0);
}
