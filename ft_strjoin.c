/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:40:37 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/13 16:07:14 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char * ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return NULL;
    
    
    
    int total_len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
    
    char * new_str;
    new_str = malloc(total_len * sizeof(char));
    if (!new_str)
        return NULL;
        
    ft_strlcpy(new_str, s1, total_len);
    ft_strlcat(new_str, s2, total_len);

    return new_str;
}
/* int main(void)
{
char * testone = "hello";
char* testtwo = " yahya";

printf("%s", ft_strjoin(testone, testtwo));
} */