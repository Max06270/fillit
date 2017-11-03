/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:32:56 by mkehon            #+#    #+#             */
/*   Updated: 2017/11/03 14:39:16 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h> // DELETE

typedef struct t_tetris
{
	char			**tetris;
	int				size[2];
	char			value;
	struct t_tetris *next;
}				t_tet;


/*
** read_file.c
*/

int		is_grid(char *str);
int		is_shape(char *str);
int		is_valid(char *str);

/*
** get_coor.c
*/

int		x_trim(char *str);
int		y_trim(char *str);
char 	*rm_n(char *str);
int		**pos(char *str);
int		**read_coor(char *str);

/*
** ini_map.c
*/

char	**ini_map(int size);
void	print_map(char **map, int size);

#endif
