/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:23:50 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 15:31:43 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	if (argc >= 2)
	{
		i = 1;
		while (argv[i])
		{
			ft(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
