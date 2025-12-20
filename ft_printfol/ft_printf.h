/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:07:33 by aboussab          #+#    #+#             */
/*   Updated: 2025/12/20 14:17:36 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H  

# include <stdarg.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putstr(char *s);
int	ft_check(char c);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_printptr(void *ptr);
int	ft_putnbr_unsa(unsigned int n);
int	ft_printhex(unsigned int m);
int	ft_print_hex(unsigned int m);

#endif
