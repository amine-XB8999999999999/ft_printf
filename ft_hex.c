/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 10:13:30 by aboussab          #+#    #+#             */
/*   Updated: 2025/12/20 14:19:15 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int m)
{
	int		i;
	char	c;

	i = 0;
	if (m >= 16)
	{
		i += ft_printhex(m / 16);
		i += ft_printhex(m % 16);
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
