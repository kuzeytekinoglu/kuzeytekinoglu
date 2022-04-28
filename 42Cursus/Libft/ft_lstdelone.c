/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:51:23 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/18 18:23:55 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>

void    ft_del(void *content)
{
    free(content);
    return ;
}

int main ()
{
    t_list *k, *e;
    char *a = ft_strdup("K NIN CONTENTİ : FURKAN");
    k = ft_lstnew(a);
    e = ft_lstnew("Mehmet");
    k->next = e;
    printf("%s", k->content);
    ft_lstdelone(k, &ft_del);
    printf("\nFONK. SONRA K NIN CONTENTİ: %s\n",k->content);
    if (e)
        printf("K LİSTESİNE BAĞLI T LİST DURUYORSA BU MESAJI GÖSTER");
    return (0);
}*/
