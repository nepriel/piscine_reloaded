/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:25:41 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/07 17:28:41 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int ft_read(char *s)
{
	int fd;
	int ret;
	char buf[4096 + 1];

	if ((fd = open(s, O_RDONLY)) == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	while ((ret = read(fd, buf, 4096)) != 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_read(argv[1]);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	return (0);
}
