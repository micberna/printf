/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunc2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:17:15 by micberna          #+#    #+#             */
/*   Updated: 2022/07/14 21:59:16 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putnbr_u(n / 10);
		len += ft_putnbr_u(n % 10);
	}
	else
		len += ft_putchar(48 + n);
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		if (n == -2147483648)
		{
			len += ft_putchar('2');
			n = -147483648;
		}
		n = -n;
	}
	if (n < 10)
		len += ft_putchar(n + '0');
	else
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	return (len);
}
