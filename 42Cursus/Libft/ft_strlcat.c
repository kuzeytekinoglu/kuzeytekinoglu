/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:36:07 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/26 11:05:15 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	i = ft_strlen(dst);
	while (*src && i + 1 < size)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

/*
#include <stdio.h>

int main ()
{
    char src[] = "benfutureicondanbilge";
    char dest[] = "ben42denfurkan";
    int srclen = ft_strlcat(dest,src,0);
    int len = ft_strlcat(dest,src,20);
    ft_strlcat(dest,src,10);
    printf("Srclen: %d\nlen: %d\n%s",srclen,len,dest);
    return (0);
}*/
