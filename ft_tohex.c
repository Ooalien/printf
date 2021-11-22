/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 02:01:03 by abayar            #+#    #+#             */
/*   Updated: 2021/11/22 03:55:54 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tohex(unsigned long int nb, char *to, int base, int *l)
{
	if (nb >= (unsigned long int)base)
		ft_tohex(nb / base, to, base, l);
	ft_putchar_fd(to[nb % base], 1, l);
}
