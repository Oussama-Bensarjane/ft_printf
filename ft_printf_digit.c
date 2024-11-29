/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obensarj <obensarj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:34:54 by obensarj          #+#    #+#             */
/*   Updated: 2024/11/29 22:37:22 by obensarj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_digit(size_t n, size_t base, char hex)
{
	int		count;
	char	*up_case;
	char	*low_case;

	low_case = "0123456789abcdef";
	up_case = "0123456789ABCDEF";
	if (n < 0)
	{
		write (1, "-", 1);
		return (printf_digit(-n, base, hex) + 1);
	}
	else if (n < base)
	{
		if (hex == 'X')
			return (printf_char(up_case[n]));
		else
			return (printf_char(low_case[n]));
	}
	else
	{
		count = printf_digit(n / base, base, hex);
		return (count + printf_digit(n % base, base, hex));
	}
}
