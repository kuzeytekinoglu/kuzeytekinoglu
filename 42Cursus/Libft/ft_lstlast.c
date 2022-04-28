/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:53:55 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/18 18:30:20 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>
int main ()
{
    t_list *liste, *nesat, *bilge;
    liste = ft_lstnew("i");
    nesat = ft_lstnew("n");
    bilge = ft_lstnew("Furkan");
    liste->next = nesat;
    nesat->next = bilge;
    
    printf("%s",ft_lstlast(liste)->content);
    return (0);
}*/
