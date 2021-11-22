/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:26:52 by abayar            #+#    #+#             */
/*   Updated: 2021/11/22 03:55:23 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar_fd(char c, int fd, int *l);
void	ft_putnbr_fd(long long n, int fd, int *l);
void	ft_putstr_fd(char *s, int fd, int *l);
void	ft_tohex(unsigned long int nb, char *to, int base, int *l);
int		ft_printf(const char *str, ...);

#endif
