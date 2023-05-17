/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:25:34 by arabelo-          #+#    #+#             */
/*   Updated: 2023/05/17 19:11:28 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char		letter = 'a';
	u_int64_t	size;
	u_int64_t	size2;
	// u_int64_t	size3;
	// u_int64_t	size4;

	size = ft_printf("%c %c %c\n", letter, 'b', 'b');
	// ft_printf("%i %i\n", 42, 30);
	// printf("%i %i\n", 42, 30);
	// size3 = ft_printf("%p\n", &letter);
	size2 = printf("%c %c %c\n", letter, 'b', 'b');
	// size4 = printf("%p\n", &letter);
	ft_printf("Size1: %u\n", size);
	// ft_printf("Size3: %u\n", size3);
	ft_printf("Size2: %u\n", size2);
	// ft_printf("Size4: %u\n", size4);
	return (0);
}
