/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:04:49 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/02 15:07:41 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*map;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	map = ft_strnew(ft_strlen(s));
	if (!map)
		return (NULL);
	i = 0;
	while (s[i])
	{
		map[i] = (f)(s[i]);
		i++;
	}
	return (map);
}
