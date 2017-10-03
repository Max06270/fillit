/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:00:16 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/02 15:07:40 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dst2;
	char *src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (src2 < dst2)
	{
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len-- > 0)
			*dst2-- = *src2--;
	}
	else
	{
		while (len--)
		{
			*dst2++ = *src2++;
		}
	}
	return (dst);
}
