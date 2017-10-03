/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkehon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:03:04 by mkehon            #+#    #+#             */
/*   Updated: 2017/10/02 15:07:40 by mkehon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int mnb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		mnb = -n;
	}
	else
		mnb = n;
	if (mnb >= 10)
	{
		ft_putnbr_fd(mnb / 10, fd);
		ft_putnbr_fd(mnb % 10, fd);
	}
	else if (mnb < 10)
	{
		ft_putchar_fd(mnb + '0', fd);
	}
}
