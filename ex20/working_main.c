/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:20:18 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/07 10:28:54 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*ret;

	i = 0;
	while (src[i])
		i++;
	len = i;
	ret = malloc(sizeof(char) * len + 1);
	i = 0;
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

int main() {
	   char *str = "Helloworld";
	      char *result;
		     result = ft_strdup(str);
			    printf("The string : %s", result);
				   return 0;
}
