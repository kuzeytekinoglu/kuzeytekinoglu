/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:23:39 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/09 14:23:51 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, count * size);
	return (ptr);
}

/*
int main()
{
    int *a = ft_calloc(3, sizeof(int));
    printf("%d", *a);
}*/
