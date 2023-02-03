/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 03:57:57 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/02/03 04:00:07 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	num;
	int	count;
	int	neg;
	
	num = n;
	neg = 0;
	
	if(num < 0)
	{
		ft_putchar("-");
		num = num * -1;
		neg = 1;
	}
	count = ft_dec_count(num);
	if(num > 9)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
	else
			ft_putchar(num + '0');
	if(neg == 1)
			return(count + 1);
	return(count);
}
int	ft_dec_count(long num)
{
	int	count;

	count = 1;
	while (num >= 10)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
