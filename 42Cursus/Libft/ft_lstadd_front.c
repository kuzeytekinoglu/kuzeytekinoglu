/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:49:41 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/18 18:12:38 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}

/*
#include <stdio.h>

int main ()
{
    t_list *lst = ft_lstnew("Hentbolcu");
    t_list *new = ft_lstnew("Enes");
    printf("%s\n",lst->content);
    ft_lstadd_front(&lst,new);
    printf("%s\n",lst->content);
    printf("%s",lst->next->content);
}*/
