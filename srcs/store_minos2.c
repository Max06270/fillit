/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_minos2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:06:38 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/18 17:41:03 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// A FAIRE 27 LIGNES FCT COOR_SHAPE
// UTILISER *NEXT

// #include <fillit.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_shape
{
	char index;
	int coor[4];
	struct t_shape *next;
} t_shape;

/*
** (j - 1 % 4) checks if we can transpose properly the shape.
*/

t_shape		coor_shape(char *str, char c)
{ 
	int	i;
	int j;
	int k;
	t_shape result;

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
				result.coor[k++] = j - i;
		}
		j++;
	}
	result.index = c;
	return (result);
}

t_shape		index_shape(char *str)
{
    int		fd;
	char	c;
    char 	buf[21];
	t_shape	result;
    
    fd = 0;
	c =	'A';
    fd = open(str, O_RDONLY);
    while (read(fd, buf, 21) > 0)
	{
		result = coor_shape(buf, c);
		c++;
		printf("index: %c | coor: [%d, %d, %d, %d]\n", result.index, result.coor[0], result.coor[1], result.coor[2], result.coor[3]);
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
