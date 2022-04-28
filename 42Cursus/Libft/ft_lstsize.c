/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:36 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/18 18:36:51 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
#include <stdio.h>

int main ()
{
    t_list *liste, *nesat, *bilge, *ramazan;
    liste = ft_lstnew("i");
    nesat = ft_lstnew("n");
    bilge = ft_lstnew("Furkan");
    ramazan = ft_lstnew("Rambo");
    liste->next = nesat;
    nesat->next = bilge;
    printf("%d\n",ft_lstsize(liste));
    bilge->next = ramazan;
    printf("%d",ft_lstsize(liste));
}*/
