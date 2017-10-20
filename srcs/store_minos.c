/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_minos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:06:38 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/19 11:26:17 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fillit.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

 {
    int h;
	int	i;
	int j;
    int x;

    h = 0;
	i = 0;
	j = 0;
    x = 0;
	while (str[j] != '\0')
	{
        if (str[j] == '.')
            i++
        j++;
        
    }

}

int     main()
{
    x_trim("....\n####\n....\n....");
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

