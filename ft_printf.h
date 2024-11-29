/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obensarj <obensarj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:21:11 by obensarj          #+#    #+#             */
/*   Updated: 2024/11/29 22:34:16 by obensarj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	printf_char(int c);
int	printf_str(char *str);
int	printf_digit(size_t n, size_t base, char hex);
int	printf_num(long n, int base, char hex);
int	check_format(char specifier, va_list ap);
int	ft_printf(const char *format, ...);

#endif
