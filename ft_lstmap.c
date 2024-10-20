/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:23:47 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/20 19:25:29 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_node;
    
    if(!lst ||! !f)
        return NULL;
        
    while(lst)
    {
        if(!(new_node = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;

    }
    return new_list;
}