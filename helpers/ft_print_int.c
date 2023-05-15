/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:55:59 by arabelo-          #+#    #+#             */
/*   Updated: 2023/05/15 21:48:04 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

u_int16_t	ft_print_int(int nbr)
{
	u_int16_t	len;
	char		*n;
	
	n = ft_itoa(nbr);
	len = ft_print_str(n);
	return (len);
}
