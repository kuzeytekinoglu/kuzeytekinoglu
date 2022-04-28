/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:48:28 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/18 18:22:04 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	a = ft_lstlast(*lst);
	a->next = new;
}

/*
#include <stdio.h>

int main ()
{
    t_list *a = ft_lstnew("Ah bu şarkıların");
    t_list *b = ft_lstnew("Gözü kör olsun");
    a->next = b;
    t_list *c = ft_lstnew("Zeki Müren");
    ft_lstadd_back(&a,c);
    printf("%s\n", b->next->content);
    return (0);
}*/
