/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_minos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:06:38 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/20 16:24:49 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fillit.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

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
			j++;
		}
        i++;
    }
    return (y);
    
}

int     main()
{
    x_trim("....\n####\n....\n....");
    x_trim("....\n....\n....\n####");
    x_trim("..##\n..##\n....\n....");
    x_trim("....\n.##.\n.##.\n....");
    x_trim("....\n....\n.###\n..#.");
    x_trim("...#\n...#\n...#\n...#");
    return (0);
}


/*
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
		x_trim(argv[1]);
		return (1);
	}
	return (0);
}
 
 */

