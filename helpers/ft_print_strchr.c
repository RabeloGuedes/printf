/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:45:41 by arabelo-          #+#    #+#             */
/*   Updated: 2023/05/15 21:48:07 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

u_int8_t	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

u_int64_t	ft_print_str(char *s)
{
	u_int64_t	len;

	len = 0;
	while (s[len])
		ft_putchar_fd(s[len++], 1);
	return (len);
}
