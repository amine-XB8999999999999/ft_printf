/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboussab <aboussab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:07:33 by aboussab          #+#    #+#             */
/*   Updated: 2025/12/19 00:21:48 by aboussab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H  


# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>

int	ft_putstr(char *s);
int	ft_check(char c);
int	ft_putnbr(int n);
int	ft_putchar_fd(char c);
int	ft_printf(const char *, ...);


#endif
