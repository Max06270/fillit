/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:34:54 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/06 11:58:59 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stdio.h"

int		is_grid(char *str)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 4;
	while (str[i] == '#' || str[i] == '.')
	{
		i++;
		x++;
		printf("i: %d | x: %d\n", i, x);
		if (x == 4 && str[i] == '\n')
		{
			i++;
			y--;
			x = 0;
			printf("y: %d\n", y);
		}
	}
	if (y != 0)
		return (0);
	return(1);
}

/* h for '#' count. X for already  used #.
** i < 15 and i > 0 for grid boundaries */

int		is_shape(char *str)
{
	int i;
	int x;

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
			if (str[i - 1]  && str[i -1] == '#')
				x++;
			if (str[i - 5]  && str[i -5] == '#')
				x++;
		}
		i++;
	}
	printf("TOTAL #: %d || ", x);
	if (x == 6 || x == 8)
		return (1);
	return (0);
}

int		main()
{
		
	printf("result: %d\n", is_shape("####\n....\n....\n....\n"));
	printf("result: %d\n", is_shape("....\n....\n.###\n...#\n"));
	printf("result: %d\n", is_shape("...#\n...#\n...#\n...#\n"));
	printf("result: %d\n", is_shape("....\n..##\n..##\n....\n"));
	printf("result: %d\n", is_shape("....\n..##\n..##\n####\n"));
	printf("result: %d\n", is_shape("....\n..#.\n.###\n....\n"));
	return (0);
}
