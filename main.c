/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:28:31 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/12/06 12:03:07 by dpaccagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include "get_next_line_bonus.h"

char	*get_next_line(int fd);

int	main(int ac, char **av)
{
	char	*line;
	int		fd;

	(void) ac;
	fd = open(av[1], O_RDONLY);
	if (!av[1])
	{
		close (fd);
		fd = 0;
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free (line);
	}
	close (fd);
	return (0);
}

	//if (fd == -1)
	//	fd = 1;
