/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:13:55 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/29 17:15:10 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(unsigned long int n)
{
	int	print_number;

	print_number = 0;
	if (n >= 16)
		print_number += ft_printpointer(n / 16);
	print_number += ft_printchar("0123456789abcdef"[n % 16]);
	return (print_number);
}
