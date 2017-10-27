/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:51:39 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/26 17:12:54 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int		main(int argc, char **argv)
{
	char **map;

	argc = 0;
	read_coor(argv[1]);
	map = ini_map(atoi(argv[2]));
	print_map(map, atoi(argv[2]));
	return (1);
}
