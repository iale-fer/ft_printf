/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:26:04 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/03/21 20:09:18 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_printf(char const *content, ...)
{
	int		count;
	int		result;
	va_list	args;

	va_start(args, content);
	count = 0;
	result = 0;
	while (content[count])
	{
		if (content[count] == '%')
			result += ft_printall(args, content[++count]);
		else
			result += ft_putchar(content[count]);
		count++;
	}
	va_end(args);
	return (result);
}
