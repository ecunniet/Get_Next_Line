/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:33:23 by ecunniet          #+#    #+#             */
/*   Updated: 2016/12/10 17:43:40 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		fd;

	i = 1;
	if (argc == 2 && (fd = open(argv[1], O_RDONLY)) > -1)
	{
		while (get_next_line(fd, &str) > 0)
		{
			ft_putnbr(i);
			ft_putstr("--->");
			ft_putendl(str);
			i++;
			free(str);
		}
	}
	return (0);
}
