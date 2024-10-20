/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:51:28 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/17 23:03:27 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *data;
    
    if(!(data = (t_list *)malloc(sizeof(t_list))))
        return NULL;
    
    data->content = content;
    data-> next = NULL;
    
    return (data);
}