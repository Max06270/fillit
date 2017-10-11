/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:32:56 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/10 18:11:05 by mkehon           ###   ########.fr       */
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
		int 	index;
		int		*coor;
		struct 	s_shape *next;
}				s_shape;

int				is_grid(char *str);
int				is_shape(char *str);
int				is_valid(char *str);

#endif
