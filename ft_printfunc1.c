/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunc1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:16:56 by micberna          #+#    #+#             */
/*   Updated: 2022/07/14 21:57:29 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)

{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[len])
		len++;
	write (1, s, len);
	return (len);
}
