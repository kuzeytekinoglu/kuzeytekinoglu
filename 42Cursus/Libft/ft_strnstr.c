/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:40:33 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/09 15:59:05 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	j = ft_strlen(needle);
	while (*haystack != '\0' && n-- >= j)
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)(haystack));
		}
		haystack++;
	}
	return (NULL);
}
