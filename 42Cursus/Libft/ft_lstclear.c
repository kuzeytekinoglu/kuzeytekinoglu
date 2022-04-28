/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:50:43 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/18 18:25:16 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = 0;
}

/*
#include <stdio.h>

void    ft_del(void *content)
{
    free(content);
}

int main ()
{
    t_list *a, *b, *c;
    char *d, *e, *f;
    d = ft_strdup("Furkan");
    e = ft_strdup("Mahmut");
    a = ft_lstnew(d);
    b = ft_lstnew(e);
    a->next = b;
    printf("FONK ÖNCE B: %s\n",(b->content));
    ft_lstclear(&a,ft_del);
    printf("FONK SONRA B:");
    printf("%s\n", (b->content));
}*/
