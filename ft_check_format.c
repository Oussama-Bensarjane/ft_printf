/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obensarj <obensarj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:34:07 by obensarj          #+#    #+#             */
/*   Updated: 2024/11/29 22:33:31 by obensarj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += printf_char(va_arg(ap, int));
	else if (specifier == 's')
		count += printf_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += printf_num(va_arg(ap, int), 10, specifier);
	else if (specifier == 'x' || specifier == 'X')
		count += printf_digit(va_arg(ap, unsigned int), 16, specifier);
	else if (specifier == 'u')
		count += printf_digit(va_arg(ap, unsigned int), 10, specifier);
	else if (specifier == 'p')
	{
		count += write (1, "0x", 2);
		count += printf_digit((size_t)va_arg(ap, void *), 16, specifier);
	}
	else if (specifier == '%')
		count += printf_char('%');
	return (count);
}
