/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:03:43 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/12 12:14:44 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t original_len;
    size_t copy_len;
    char *str;
    
    if (!s)
        return NULL;
    
    original_len = ft_strlen((char *)s);

    if (start >= original_len)
        return ft_strdup("");
    
    copy_len = original_len - start;
    if (copy_len > len)
        copy_len = len;
    
    str = malloc((copy_len + 1) * sizeof(char));
    if (!str)
        return NULL;
    
    ft_strlcpy(str, s + start, copy_len + 1);
    
    return str;
}

