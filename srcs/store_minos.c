/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_minos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:06:38 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/10 18:42:01 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int		*def_shape(char *str)
{
	int	i;
	int j;
	int coor[4];

	i = 0;
	j = 0;
	
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == '#')
		{
			while (str[j] != '\0')
			{
				if (str[j] == '#')
				{
					j++;
					coor = j;
					coor++;
				}
			}
		}
	}
	return (coor); // A FINIR	
}

/*
s_shape		l_shape(char *str)
{
	int		fd;
	int		i;
	char 	buf[21];

	fd = 0;
	i = 0;

	fd = open(str, 0_RDONLY);
	if (!is_valid)
	{
		while(lu != 0)
		{
			lu = read(fd, buf, 21);
			i++;
			coor = 'PlaceHolder'; // A FAIRE
		}
	}
	return (0);

}

*/
