/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:17:24 by micberna          #+#    #+#             */
/*   Updated: 2022/07/14 21:53:36 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *st, ...);
int		ft_putnbr(int n);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_print_p(unsigned long n, char c);
int		ft_print_x(unsigned int n, char c);
int		ft_putnbr_u(unsigned int n);

#endif
