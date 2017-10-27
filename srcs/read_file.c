/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:51:39 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/26 17:21:54 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

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
** lu = nb of char 'open' was able to read.
** read(fd, buf, 21) read from fd 21 char into buffer.
** after read, each buffer ends with '\0'.
** if read read 0 buf keeps previous value.
*/

int		is_valid(char *str)
{
	int		fd;
	char	buf[21];
	int		temp;
	int		lu;

	lu = 1;	
	fd = open(str, O_RDONLY);
	while (lu != 0)
	{
		temp = lu;
		lu = read(fd, buf, 21);
		if (lu == 0)
			break;
		if (!is_grid(buf) || !is_shape(buf))
			return (0);
	}
	if (temp != 20)
		return (0);
	return (1);
}
