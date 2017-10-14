/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:32:56 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/11 11:18:46 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h> // DELETE

typedef	struct 	s_shape
{
		int index;
		int	coor[4];
		struct t_shape *next;
}	t_shape;

int				is_grid(char *str);
int				is_shape(char *str);
int				is_valid(char *str);

#endif
