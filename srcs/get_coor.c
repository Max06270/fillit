/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:06:38 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/23 16:47:04 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/*
** remove empty horizontal lines.
*/

int		x_trim(char *str)
{
	int	i;
	int j;
    int x;

	i = 0;
	j = 0;
    x = 0;
	while (str[i] != '#')
	{
		if (str[i] == '.')
			j++;
		if (j == 4)
		{
            x++;
			j = 0;
		}
		i++;
    }
	return (x);

}

/*
** remove empty vertical lines.
*/

int		y_trim(char *str)
{
    int	i;
    int j;
    int y;
    
    i = 0;
    j = 0;
    y = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '.' && (i % 5 == 0 + y))
			j++;
        if (j == 4)
		{
			i = y;
			j = 0;
			y++;
		}
        i++;
    }
    return (y); 
}

/*
** get # positions and return values aligned on top left corner.
*/

int		*pos(char *str)
{
	int i;
	int j;
	int	*v;
	
	i = 0;
	j = 0;
	v = malloc(sizeof(int) * 4);
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			v[j++] = i - 5 * x_trim(str) - 1 * y_trim(str);
		i++;
	}
	return (v);
}

/*
** read file and return shapes coordinates.
*/

int		*read_coor(char *str)
{
    int		fd;
    char 	buf[21];
	int 	*v;
    
    fd = 0;
	v = malloc(sizeof(int) * 4);
    fd = open(str, O_RDONLY);
    while (read(fd, buf, 21) > 0)
	{
		v = pos(buf);
		printf("coor: [%d, %d, %d, %d]\n", v[0], v[1], v[2], v[3]);
	}
	return (v);
}
