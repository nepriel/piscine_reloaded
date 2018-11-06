/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurive_factorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:38:46 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 12:49:57 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb >= 2 && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
	}
	return (0);
}
