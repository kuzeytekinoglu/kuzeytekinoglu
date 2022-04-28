/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:54:28 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/18 18:33:50 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	result = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}

/*
#include <stdio.h>

void    ft_del(void *content)
{
    free(content);
}

void    *tlu(void *content)
{
    if (content == NULL)
        return (NULL);
    return ("FURKAN");
}

int main ()
{
    t_list *a, *b, *c;
    t_list *d, *e, *f;
    char *ca, *cb, *cc, *cd, *ce;
    ca = ft_strdup("Ayağım kırıldı");
    cb = ft_strdup("Kalbim kırıldı");
    cc = ft_strdup("Kolum kırıldı");
    cd = ft_strdup("Dizim kırıldı");
    ce = ft_strdup("Pepe bana hiç inanmadı");
    a = ft_lstnew(ca);
    b = ft_lstnew(cb);
    c = ft_lstnew(cc);
    d = ft_lstnew(cd);
    e = ft_lstnew(NULL);
    f = ft_lstnew(ce);
    
    a->next = b;
    b->next = c;
    
    d->next = e;
    e->next = f;
    
    printf("%s\n%s",(a->next->content), (d->next->next->content));

    t_list *newa, *newd;
    newa = ft_lstmap(a,&tlu,&ft_del);
    printf("\n%s", (newa->next->content));
    newd = ft_lstmap(d,&tlu,&ft_del);
    printf("\n%s", (newd->next->content));
    return (0);
}*/
