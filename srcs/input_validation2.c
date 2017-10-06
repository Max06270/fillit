/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:34:54 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/05 19:01:41 by mkehon           ###   ########.fr       */
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

/* h for '#' count, p for '#' pos.
** i < 15 and i > 0 for grid boundaries */

int		is_shape(char *str)
{
	int i;
	int h;
	int p;

	i = 0;
	h = 0;
	p = 0;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == '#')
		{
			if (h == 4)
			   return (1)
			if (str[i + 1] == '#' || (i < 15 && str[i + 5] == '#') || (i > 0 && str[i - 1] == '#'))
			{
				h++;
				p = i;
				printf("i: %d | h: %d | p: %d\n", i, h, p);
			}
		}

	}
	return (0);
}

int		main()
{
	printf("result: %d\n", is_shape("####\n....\n....\n....\n"));
	printf("result: %d\n", is_shape("....\n....\n.###\n...#\n"));
	printf("result: %d\n", is_shape("...#\n...#\n...#\n...#\n"));
	printf("result: %d\n", is_shape("....\n..##\n..##\n....\n"));
	printf("result: %d\n", is_shape("....\n..##\n..##\n####\n"));
	return (0);
}
