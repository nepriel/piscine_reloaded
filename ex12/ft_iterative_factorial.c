/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:57:27 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 12:28:06 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
