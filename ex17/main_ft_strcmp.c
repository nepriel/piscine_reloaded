/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:16:13 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/06 17:36:07 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s2[i] == s1[i]) && (s1[i] && s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char *s = "0";
	char *s1 = "2";

	printf("%d", ft_strcmp(s, s1));
	return (0);
}
