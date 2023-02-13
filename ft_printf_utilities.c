/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:53:48 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/02/13 17:59:45 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *c)
{
	int	cont;

	cont = 0;
	while (c[cont])
		cont += ft_putchar(c[cont]);
	return (cont);
}

int	ft_printall(va_list args, char c)
{
	int	cont;

	cont = 0;
	if (c == 'c')
		cont += ft_putchar(va_arg(args, int));
	else if (c == 's')
		cont += ft_putstr(va_arg(args, char *));
	else if (c == 'x')
		cont += ft_puthexa(va_arg(args, size_t), "0123456789abcdef");
	else if (c == 'X')
		cont += ft_puthexa(va_arg(args, size_t), "0123456789ABCDEF");
	else if (c == 'u')
		cont += ft_putnbr(va_arg(args, unsigned int));
	else if (c == 'd' || c == 'i')
		cont += ft_putnbr(va_arg(args, int));
	else if (c == 'p')
			cont += ft_putmem(va_arg(args, unsigned long long),
				"0123456789abcdef");
	else if (c == '%')
		cont += ft_putchar('%');
	return (cont);
}
