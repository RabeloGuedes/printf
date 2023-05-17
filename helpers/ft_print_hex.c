/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:48:27 by arabelo-          #+#    #+#             */
/*   Updated: 2023/05/17 18:57:57 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

u_int8_t	ft_print_hex(u_int32_t hex, char c)
{
	char		*n;
	u_int8_t	len;

	if (!hex)
		return (ft_print_str("(nil)"));
	n = ft_uitoa(hex);
	len = ft_print_str("0x");
	len = ft_print_str(n);
}
