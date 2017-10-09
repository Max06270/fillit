/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:51:39 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/09 10:59:56 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int		is_grid(char *str)
{
	int 	i;
	int 	x;
	int 	y;

	i = 0;
	x = 0;
	y = 4;
	while (str[i] == '#' || str[i] == '.')
	{
		i++;
		x++;
		if (x == 4 && str[i] == '\n')
		{
			i++;
			y--;
			x = 0;
		}
	}
	if (str[i + 1] == '\0')
		return (0);
	if (y != 0)
		return (0);
	return(1);
}

int		is_shape(char *str)
{
	int 	i;
	int 	x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			if (str[i + 1]  && str[i + 1] == '#')
				x++;
			if (str[i + 5]  && str[i + 5] == '#')
				x++;
			if (str[i - 1]  && str[i - 1] == '#')
				x++;
			if (str[i - 5]  && str[i - 5] == '#')
				x++;
		}
		i++;
	}
	if (x == 6 || x == 8)
		return (1);
	return (0);
}  

/*
** after read, each buffer ends with '\0'
** if read read 0 buf keeps previous value
*/
int		main(int argc, char **argv)
{
	int		fd;
	char	buf[21];
	int		temp;
	int		lu;
	
	fd = 0;
	lu = 1; 
	if (argc == 2)	
	{
		fd = open(argv[1], O_RDONLY); // return the address of the file
		while (lu != 0) // lu = nb of char 'open' was able to read. if 0 it is a problem.
		{
			temp = lu;
			lu = read(fd, buf, 21); // read in fd 21 char into buffer
			if (lu == 0)
				break;
			if (!is_grid(buf) || !is_shape(buf))
				return (0);
		}
		if (temp != 20)
			return (0);
	}
	return (1);
}
