/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:05:50 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/02 15:07:41 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*chaine;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	chaine = ft_strnew(len);
	if (!chaine)
		return (NULL);
	while (i < len)
	{
		chaine[i] = s[start];
		i++;
		start++;
	}
	return (chaine);
}
