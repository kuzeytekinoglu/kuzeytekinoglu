/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:27:02 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/09 14:27:07 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ss;
	size_t		count;

	count = 0;
	ss = (const char *)s;
	while (count < n)
	{
		if (ss[count] == (const char)c)
			return ((void *)&ss[count]);
		count++;
	}
	return (NULL);
}

/*
int main()
{
    char a[] = "göko";
    ft_memchr(a, 'k', 2);
    printf("%s\n", a);
}*/
