/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:16:33 by micberna          #+#    #+#             */
/*   Updated: 2022/07/14 20:38:32 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long n, char c)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		if (n < 10)
			len += ft_putchar(n + '0');
		else
			len += ft_putchar(n - 10 + 'a');
	}
	else
	{
		len += ft_print_p(n / 16, c);
		len += ft_print_p(n % 16, c);
	}
	return (len);
}
