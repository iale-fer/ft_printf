/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:58:07 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/02/13 19:33:10 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(char const *content, ...);
int		ft_printall(va_list args, char str);
int		ft_putchar(char c);
int		ft_puthexa(size_t num, char *hexa);
int		ft_hexa_count(size_t num);
int		ft_putnbr(int n);
int		ft_dec_count(long num);
int		ft_putmem(unsigned long long num, char *hexa);
int		ft_putstr(char *c);
#endif