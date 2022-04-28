/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:34:16 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/09 14:34:18 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = -1;
	if (s)
		while (s[++i])
			(*f)(i, s + i);
}

/*
#include <stdio.h>

void    iter(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
    else if (*c >= 'A' && *c <= 'Z')
        *c = *c + 32;
}

int main ()
{
    char str[] = "GökO";
    ft_striteri(str, *iter);
    printf("%s",str);
    return (0);
}*/
