/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmbr_un.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:06:31 by aboussab          #+#    #+#             */
/*   Updated: 2025/12/19 01:31:55 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putnbr(int n)
{
	char	c;
	int	i;
	
	i = 0;
	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n / 10) > 0)
	{
		ft_putnbr((n / 10));
		i++;
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	return(++i);
}

