/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:20:28 by arabelo-          #+#    #+#             */
/*   Updated: 2023/05/17 19:34:24 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

u_int16_t	ft_print_address(u_int64_t address)
{
	u_int16_t	len;

	len = 0;
	if (!address)
	{
		ft_print_str("(nil)");
		return (5);
	}
	len += ft_print_str("0x");
	while (address > 16)
	{
		len += ft_print_char(HEX_TABLE_LOWER[address % 16]);
		address /= 16;
	}
	len += ft_print_char(HEX_TABLE_LOWER[address]);
	// if (address > 14)
	// {
	// 	len += ft_print_address(address / 16);
	// 	len += ft_print_address(address % 16);
	// }
	// 	len += ft_print_str("0x");
	// 	len += ft_print_char(HEX_TABLE_LOWER[address]);
	return (len);
}
