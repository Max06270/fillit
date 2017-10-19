/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_minos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:06:38 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/18 18:05:14 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fillit.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	

/*
** (j - 1 % 4) checks if we can transpose properly the shape.
*/

int		trim_x(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '#' && i < 4)
	{
		i++;
		if (i == 4)
		{
			skip line
			i = 0;
		}

}

int		*coor_shape(char *str, char c)
{ 
	int	i;
	int j;
	int k;
	int result[5];

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '#')
		i++;
	while (str[j] != '\0')
	{
		if (str[j] == '#')
		{
			if (((j - i) % 4) == 0 && (j - i) != 0)
			{
				i--;
				j = -1;
				k = 0;
			}
			else
				result[k++] = j - i;
		}
		j++;
	}
	result[4] = c;
	return (result);
}

t_shape		index_shape(char *str)
{
    int		fd;
	char	c;
    char 	buf[21];
	int 	result[5];
    
    fd = 0;
	c =	'A';
    fd = open(str, O_RDONLY);
    while (read(fd, buf, 21) > 0)
	{
		result = coor_shape(buf, c);
		c++;
		printf("index: %c | coor: [%d, %d, %d, %d]\n", result.index, result[0], result[1], result[2], result[3]);
	}
	return (result);	
}


int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		index_shape(argv[1]);
		return (1);
	}
	return (0);
}
