/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:39:40 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/07 13:26:01 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
		int i;
			int nbr;
				int negative;

					nbr = 0;
						negative = 0;
							i = 0;
								while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
													(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
											i++;
									if (str[i] == '-')
												negative = 1;
										if (str[i] == '+' || str[i] == '-')
													i++;
											while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
													{
																nbr *= 10;
																		nbr += (int)str[i] - '0';
																				i++;
																					}
												if (negative == 1)
															return (-nbr);
													else
																return (nbr);
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			res++;
		i++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
	printf("%d", ft_count_if(argv, &ft_atoi));
	return (0);
}
