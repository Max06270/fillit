/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:05:46 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/02 15:07:41 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int pos;

	i = 0;
	j = 0;
	if (little[0] == 0 || !little)
		return ((char *)&big[0]);
	while (big[i])
	{
		if (little[j] == big[i])
		{
			pos = i;
			while (little[j++] == big[i++])
			{
				if (little[j] == 0)
					return ((char *)&big[pos]);
			}
			i = pos + 1;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
