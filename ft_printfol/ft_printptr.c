/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 10:33:31 by aboussab          #+#    #+#             */
/*   Updated: 2025/12/20 14:27:23 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhe(unsigned long int m)
{
	int		i;
	char	c;

	i = 0;
	if (m >= 16)
	{
		i += ft_printhe(m / 16);
		i += ft_printhe(m % 16);
	}
	else if (m >= 10)
	{
		c = (m - 10) + 'a';
		i += write(1, &c, 1);
	}
	else
	{
		c = (m + '0');
		i += write(1, &c, 1);
	}
	return (i);
}

int	ft_printptr(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	i += write(1, "0x", 2);
	i += ft_printhe((unsigned long int)ptr);
	return (i);
}
