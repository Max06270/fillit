/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_putin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 12:14:39 by yusong            #+#    #+#             */
/*   Updated: 2017/11/01 13:19:38 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 point is two directions of the map (x and y), shape is the tetris, val is the 
 value of valid tetris such as A, B....Z
 */
char	**map_putin(char **map, int point[2], t_tet *shape, char val)
{
	int		i;
	int		j;

	i = 0;
// size[0] is x of tetris
	while (i < shape->size[0])
	{
		j = 0;
// size[1] is y of tetris
		while (j < shape->size[1])
		{
			if (shape->tetris[i][j] == '#')
				map[point[0] + i][point[1] + j] = val;
			j++;
		}
		i++;
	}
	return (map);
}


int		map_check(char **map, int point[2], t_tet *shape)
{
	int		i;
	int		j;

	i = 0;
	while (i < shape->size[0])
	{
		j = 0;
		while (j < shape->size[1])
		{
			if (shape->tetris[i][j] == '#' &&
					map[point[0] + i][point[1] + j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
