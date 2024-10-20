/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:29:48 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/20 19:35:32 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    // Allocate memory for the new string
    char * str;
    int i;
    int size = ft_strlen((char *)s + 1);
    str = (char *)malloc((size) * sizeof(char));
    if(!str || !s || size == 0)
        return NULL;
    // Loop through the string
    i = 0;
    while(i < size)
    {
        // Call f(index, character)
        str[i] = (*f)(i,s[i]);
        i++;
    }
    str[i] = '\0'; // Null-terminate the new string
    // Return the new string
    return str;
}
