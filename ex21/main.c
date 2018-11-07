/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:36:26 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/07 10:48:53 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;
	int len;

	tab = NULL;
	if ((min - max) >= 0)
		return (tab);
	len = max - min;
	tab = malloc(sizeof(int) * (len + 1));
	i = 0;
	while (i <= len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int		main(int argc, char **argv)
{
	int a;
	int b;
	int *test;
	int i;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		test = ft_range(a, b);
		i = 0;
		while (test[i])
		{
			printf("%d\n", test[i]);
			i++;
		}
	}
	return (0);
}
