/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 03:57:57 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/03/22 17:51:23 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	x;

	x = 0;
	if (num == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	else if (num > 9)
	{
		x += ft_putnbr(num / 10);
		x += ft_putnbr(num % 10);
	}
	else if (num < 0)
	{
		x += ft_putchar('-');
		x += ft_putnbr(-num);
	}
	else
		x += ft_putchar(num + '0');
	return (x);
}
