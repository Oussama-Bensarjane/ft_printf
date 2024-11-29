/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obensarj <obensarj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 21:55:20 by obensarj          #+#    #+#             */
/*   Updated: 2024/11/29 22:39:06 by obensarj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_num(long n, int base, char hex)
{
	int		count;
	char	*symbol;

	symbol = "0123456789";
	if (n < 0)
	{
		write (1, "-", 1);
		return (printf_digit(-n, base, hex) + 1);
	}
	else if (n < base)
	{
		return (printf_char(symbol[n]));
	}
	else
	{
		count = printf_digit(n / base, base, hex);
		return (count + printf_digit(n % base, base, hex));
	}
}
