/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:52:51 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/03/23 22:14:15 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Esta función convierte un número entero sin signo en su 
//representación hexadecimal y almacena el resultado en una 
//cadena de caracteres.
int	ft_puthexa(size_t num, char *hexa)
{
	int	count;

	count = ft_hexa_count(num);
	if (num >= 16)
		ft_puthexa(num / 16, hexa);
	ft_putchar(hexa[num % 16]);
	return (count);
}

//Cuenta la cantidad de dígitos hexadecimales que contiene un número. 
int	ft_hexa_count(size_t num)
{
	int	count;

	count = 1;
	while (num >= 16)
	{
		num = num / 16;
		count++;
	}
	return (count);
}

//Devuelve un entero que representa el número de caracteres impresos.
//imprime el 0x y lo añade a count
int	ft_putmem(unsigned long long num, char *hexa)
{
	size_t	count;

	count = 0;
	count += ft_putstr("0x");
	if (!num)
		count += ft_putchar('0');
	else
	{
		count += ft_hexa_count(num);
		ft_puthexa(num, hexa);
	}
	return (count);
}
