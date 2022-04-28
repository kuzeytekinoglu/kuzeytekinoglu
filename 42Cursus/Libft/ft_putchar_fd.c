/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:29:27 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/09 14:29:32 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <stdio.h>
#include <fcntl.h>
int main()
{
    int fd3 = open("evocuchar.txt", O_CREAT | O_WRONLY,777);
    ft_putchar_fd('a', fd3);
}*/
