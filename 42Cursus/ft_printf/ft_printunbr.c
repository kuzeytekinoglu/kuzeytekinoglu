/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:19:39 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/29 17:32:28 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunbr(unsigned int n)
{
	int	print_number;

	print_number = 0;
	if (n == 0)
	{
		ft_printstr("0");
		return (1);
	}
	if (n >= 10)
		print_number += ft_printunbr(n / 10);
	print_number += ft_printchar("0123456789"[n % 10]);
	return (print_number);
}
