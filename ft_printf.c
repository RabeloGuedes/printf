/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:15:04 by arabelo-          #+#    #+#             */
/*   Updated: 2023/05/15 19:10:31 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;

	va_start(args, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
			ft_format_checker(s[++i], args);
		else
			ft_putchar_fd(s[i], 1);
		i++;
	}
	return (0);
}