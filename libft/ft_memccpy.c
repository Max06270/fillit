/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 14:59:46 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/02 15:07:40 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *src2;
	char *dst2;

	src2 = (char*)src;
	dst2 = (char*)dst;
	while (n > 0 && *src2 != c)
	{
		n--;
		*dst2++ = *src2++;
	}
	if (n > 0)
	{
		*dst2++ = *src2++;
		return ((void*)dst2);
	}
	else
		return (NULL);
}
