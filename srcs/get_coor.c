/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:06:38 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/26 17:21:27 by mkehon           ###   ########.fr       */
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
        if (str[i] == '.' && (i % 4 == 0 + y))
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
** remove \n 
*/

char	*rm_n(char *str)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = malloc(sizeof(char) * 16);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			i++;
		temp[j] = str[i];
		i++;
		j++;
	}
	return (temp);
}

/*
** get # positions and return values aligned in top left corner.
*/

int		**pos(char *str)
{
	int i;
	int j;
	int temp;
	int	**v;
	
	i = 0;
	j = 0;
	v = malloc(sizeof(int *) * 4);
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			v[j] = malloc(sizeof(int) * 2);
			temp = i - 4 * x_trim(str) - y_trim(str);
			v[j][0] = temp % 4;
			v[j][1] = temp / 4;
			j++;
		}
		i++;
	}
	return (v);
}

/*
** read file and return shapes coordinates.
*/

int		**read_coor(char *str)
{
    int		fd;
    char 	buf[21];
	int		**w;
    
    fd = open(str, O_RDONLY);
    while (read(fd, buf, 21) > 0)
	{
		w = pos(rm_n(buf));
        printf("coord: [%d, %d][%d, %d][%d, %d][%d, %d]\n",
				w[0][0],w[0][1],w[1][0],w[1][1],w[2][0],w[2][1],w[3][0],w[3][1]);
	}
	return (w);
}
