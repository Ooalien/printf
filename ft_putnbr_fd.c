/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:01:23 by abayar            #+#    #+#             */
/*   Updated: 2021/11/22 02:54:21 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

void	ft_putnbr_fd(long long n, int fd, int *l)
{
	unsigned long	nm;

	if (n < 0)
	{
		ft_putchar_fd('-', fd, l);
		n = n * -1;
	}
	nm = n;
	if (nm >= 10)
		ft_putnbr_fd(nm / 10, fd, l);
	ft_putchar_fd(nm % 10 + 48, fd, l);
}
