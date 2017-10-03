/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 14:56:12 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/02 14:57:27 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nlen(int n)
{
	int len;

	len = 1;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void		ft_swapchar(char *p1, char *p2)
{
	*p1 ^= *p2;
	*p2 ^= *p1;
	*p1 ^= *p2;
}

static char		*ft_strrev(char *str)
{
	char *p1;
	char *p2;

	if (!str || !*str)
		return (str);
	p1 = str;
	p2 = str + ft_strlen(str) - 1;
	while (p2 > p1)
		ft_swapchar(p1++, p2--);
	return (str);
}

char			*ft_itoa(int n)
{
	char	*digits;
	char	*result;
	int		nlen;
	int		i;

	digits = ft_strdup("0123456789");
	if (n == -2147483648 || n == 0)
		return (n ? ft_strdup("-2147483648") : ft_strdup("0"));
	nlen = ft_nlen(n);
	result = n < 0 ? ft_strnew(nlen + 1) : ft_strnew(nlen);
	if (!result)
		return (NULL);
	result[nlen] = n < 0 ? '-' : 0;
	n = n < 0 ? -n : n;
	i = result[0] == '-' ? 1 : 0;
	while (n)
	{
		result[i] = digits[n % 10];
		n /= 10;
		i++;
	}
	result = ft_strrev(result);
	return (result);
}
