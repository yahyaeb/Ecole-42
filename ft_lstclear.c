/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:52:11 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/20 16:11:36 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;

    if(lst == NULL || del == NULL)
        return;
        
    while(*lst)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        (*lst) = temp;
    }
}
