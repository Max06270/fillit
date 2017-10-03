/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:00:21 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/02 15:07:40 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*txt;

	txt = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		txt[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
