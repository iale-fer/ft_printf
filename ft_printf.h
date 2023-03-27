/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:58:07 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/03/27 18:10:43 by ivanalefern      ###   ########.fr       */
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
int	ft_pointer(unsigned int long ptr);
int	ft_hexachange(unsigned int long num, char *str);
int	ft_hexadecimal(unsigned int num, char c);
int		ft_dec_count(long num);
int		ft_putmem(unsigned long long num, char *hexa);
int		ft_putstr(char *c);
#endif