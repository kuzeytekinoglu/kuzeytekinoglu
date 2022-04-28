/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:30:19 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/14 20:00:21 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	n;

	if (!s)
		return ;
	n = 0;
	while (s[n])
		ft_putchar_fd(s[n++], fd);
	ft_putchar_fd('\n', fd);
}

/*
#include <stdio.h>
#include <fcntl.h>
int main()
{
    int fd3 = open("evocuendn.txt", O_CREAT | O_WRONLY,777);
    ft_putendl_fd("ben future icondan bilge", fd3);
}*/
