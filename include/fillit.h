/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:32:56 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/23 17:09:29 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h> // DELETE


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
int		*pos(char *str);
int		*read_coor(char *str);

#endif
