/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:26:04 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/02/13 19:34:28 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
