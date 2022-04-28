/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:32:01 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/14 19:59:17 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	n;

	if (!s)
		return ;
	n = 0;
	while (s[n])
		ft_putchar_fd(s[n++], fd);
}

/*
#include <stdio.h>
#include <fcntl.h>
int main()
{
    int fd3 = open("evocustr.txt", O_CREAT | O_WRONLY,777);
    ft_putstr_fd("ben future icondan bilge", fd3);
}*/
