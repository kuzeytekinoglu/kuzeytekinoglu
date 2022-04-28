/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:52:35 by gdogan            #+#    #+#             */
/*   Updated: 2022/01/18 18:28:18 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>

void    f(void *lst)
{
    char        *content;
    int i = 0;

    content = (char *)lst;
    while (content[i])
    {
        content[i] = 'f';
        i++;
    }
}

int main ()
{
    t_list *a;
    char *b = malloc(10);
    int i = 0;
    while(i < 8)
    {
        b[i] = 48;
        i++;
    }
    b[i] = '\0';
    a = ft_lstnew(b);
    printf("%s\n", a->content);
    ft_lstiter(a, f);
    printf("%s\n", a->content);
}*/
