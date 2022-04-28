/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:23:14 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/09 14:23:18 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*ss;
	size_t				count;

	ss = (unsigned char *)b;
	count = 0;
	while (count < len)
		ss[count++] = c;
	return (b = ss);
}

/*int main()
{
    char a[] = "enes";
    ft_memset(a, 'x', 2);
    printf("%s\n", a);
}*/
