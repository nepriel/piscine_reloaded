/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:38:46 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 12:58:15 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
