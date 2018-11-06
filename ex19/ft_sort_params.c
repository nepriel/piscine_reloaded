/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:57:32 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 17:14:20 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	`
}

void print_params(char **s)
{
	int i;

	i = 1;
	while (s[i])
	{
		ft_putstr(s[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int passage;
//	char *temp;

	passage = argc - 1;
	if (argc >= 2)
	{
		while (passage)
		{
			i = 0;
			while (i++ < argc - 1)
			{
				if (greater(argv[i], argv[i + 1]))
				{
					/*temp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = argv[i];*/
				}
			}
			passage--;
		}
		print_params(argv);
	}
	return (0);
}
