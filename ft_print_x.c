/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:17:06 by micberna          #+#    #+#             */
/*   Updated: 2022/07/14 20:56:30 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int n, char c)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		if (n < 10)
			len += ft_putchar(n + '0');
		else
		{
			if (c == 'x')
				len += ft_putchar(n - 10 + 'a');
			else
				len += ft_putchar(n - 10 + 'A');
		}
		return (len);
	}
	else
	{
		len += ft_print_x(n / 16, c);
		len += ft_print_x(n % 16, c);
	}
	return (len);
}
