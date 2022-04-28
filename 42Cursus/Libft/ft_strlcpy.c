/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:37:08 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/09 14:37:18 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (dstsize > 0)
	{
		while (src[i] && (i < (dstsize - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*
int main ()
{
    char dest[] = "nasılsınevocukardes";
    char src[] = "cheatbasmabastırma";
    int size = ft_strlcpy(dest,src,5);
    ft_strlcpy(dest,src,6);
    printf("Size : %d\n%s", size, dest);
    return (0);
}*/
