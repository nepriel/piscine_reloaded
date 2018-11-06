/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:26:18 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 14:42:24 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int i;

	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb >= 4)
	{
		i = 2;
		while ((i * i) <= nb)
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (i < 200)
		{
			printf("sqr root of %d is %d\n", i, ft_sqrt(i));
			i++;
		}
		printf("%d", ft_sqrt(atoi(argv[1])));
	}
	return (0);
}
