/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:30:15 by gdogan            #+#    #+#             */
/*   Updated: 2022/02/16 11:31:31 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	inttoasci(int pid)
{
	char	c;

	if (pid >= 10)
		inttoasci(pid / 10);
	c = (pid % 10) + 48;
	write(1, &c, 1);
}

int	ascitoint(char *str)
{
	int	number;

	number = 0;
	while (*str)
		number = (10 * number) + (*str++ - 48);
	return (number);
}

void	error(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
	exit(0);
}
