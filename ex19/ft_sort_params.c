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
	int i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

/*void print_params(char **s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putstr(s[i]);
		ft_putchar('\n');
		i++;
	}
}*/

int		main(int argc, char **argv)
{
	int i;
	int test;
	char *temp;

	test = 1;
		while (test)
		{
			test = 0;
			i = 0;
			while (i++ < argc - 1)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					temp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = temp;
					test = 1;
				}
			}
		}
		//print_params(argv);
		i = 0;
		while (i++ < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	return (0);
}
