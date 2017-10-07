/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:51:39 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/06 17:14:38 by mkehon           ###   ########.fr       */
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

/* after read, each buffer ends with '\0'*/
int		main(int argc, char **argv)
{

	int		fd;
	char	buf[21];
	int		lu;
	
	fd = 0;
	lu = 1; 
	if (argc == 2)	
	{
		fd = open(argv[1], O_RDONLY); // return the address of the file
		while (lu != 0)
		{
			lu = read(fd, buf, 21); // read in fd 21 char into buffer
			if (!is_grid(buf) || !is_shape(buf))
			{
				printf("is_grid: %d | is_shape: %d\n", is_grid(buf), is_shape(buf));
				return (0);
			}
		}
	}

	printf("Wesh alors\n");
	return (1);
}
