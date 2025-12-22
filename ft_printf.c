/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:07:09 by aboussab          #+#    #+#             */
/*   Updated: 2025/12/20 14:16:16 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printcase(va_list list, const char *str)
{
	int	i;

	i = 0;
	if (*str == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (*str == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (*str == 'd' || *str == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (*str == 'p')
		return (ft_printptr(va_arg(list, void *)));
	else if (*str == 'u')
		return (ft_putnbr_unsa(va_arg(list, unsigned int)));
	else if (*str == 'x')
		return (ft_printhex(va_arg(list, unsigned int)));
	else if (*str == 'X')
		return (ft_print_hex(va_arg(list, unsigned int)));
	else
		ft_putchar('%');
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;

	if (!str)
		return (-1);
	i = 0;
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_check(*str))
				i += ft_printcase(list, str);
			else
			{
				i += ft_putchar('%');
				i += ft_putchar(*str);
			}
		}
		else
			i += ft_putchar(*str);
		str++;
	}
	return (va_end(list), i);
}
