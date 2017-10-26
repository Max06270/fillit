/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ini_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 14:39:35 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/26 14:40:12 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fillit.h>
#include <stdio.h>
#include <stdlib.h>

char	**ini_map(int size)
{
	int x;
	int y;
	char **map;

	x = 0;
	map = malloc(sizeof(char *) * size);
	while (x < size)
	{
		y = 0;
		map[x] = malloc(sizeof(char) * size);
		while (y < size)
		{
			map[x][y] = '.';
			y++;
		}
		x++;
	}
	return (map);
}

void	print_map(char **map, int size)
{
    int x;
    int	y;
    
    x = 0;
    while (x < size)
	{
		y = 0;
		while (y < size)
		{
			printf("%c", map[x][y]);
			y++;
		}
		x++;
		printf("\n");
	}
}

int		main(int argc, char **argv)
{
	char **map;
	if (argc == 2)
	{
		map = ini_map(atoi(argv[1]));
		print_map(map, atoi(argv[1]));
	}
	return (0);
}
