/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:37:23 by arabelo-          #+#    #+#             */
/*   Updated: 2023/05/15 21:25:02 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

u_int64_t	ft_format_checker(int c, va_list args)
{
	u_int64_t	len;

	len = 0;
	if ((char)c == 'c')
		len = ft_print_char(va_arg(args, int));
	else if ((char)c == 's')
		len = ft_print_str(va_arg(args, char *));
	// else if ((char)c == 'p')
	// 	ft_putaddress_fd(va_arg(args, u_int64_t));
	else if ((char)c == 'd' || (char)c == 'i')
		len = ft_print_int(va_arg(args, int));
	else if ((char)c == 'u')
		len = ft_print_uint(va_arg(args, u_int32_t));
	// else if ((char)c == 'x'|| (char)c == 'X')
	// 	ft_puthex_fd(va_arg(args, u_int32_t), c, 1);
	else if ((char)c == '%')
	{
		ft_putchar_fd('%', 1);
		len++;
	}
	return (len);
}