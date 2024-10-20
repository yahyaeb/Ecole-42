/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:41:14 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/14 17:02:28 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(const char *s1, const char *set)
{
    char *new_str;
    int i = 0;
    if(!s1 || !set)
        return NULL;
    
    int start = 0;
    int len = ft_strlen((char *)s1) - 1;

    while(ft_strchr(set, s1[start]) && s1[start])
        start++;

    while(len >= start && ft_strchr(set, s1[len]))
        len--;

    if(!(new_str = (char *)malloc((len - start + 2) * sizeof(char))))
        return NULL;
    
    while(start <= len)
        new_str[i++] = s1[start++];
    
    new_str[i] = '\0';

    return new_str;
}

int main()
{
    char *s1;
    char *set;
    char *trimmed;

    // Test 1: Basic trimming of asterisks
    s1 = "**Hello World!**";
    set = "*";
    trimmed = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, trimmed);
    free(trimmed);

    // Test 2: Trimming multiple characters
    s1 = "**||Hello World!  *|1*||* ";
    set = "*|";
    trimmed = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, trimmed);
    free(trimmed);

    // Test 3: No trimming needed
    s1 = "No trim needed";
    set = "*";
    trimmed = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, trimmed);
    free(trimmed);

    // Test 4: Trimming spaces
    s1 = "   Hello World!   ";
    set = " ";
    trimmed = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, trimmed);
    free(trimmed);

    // Test 5: Empty string test
    s1 = "";
    set = "*";
    trimmed = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, trimmed);
    free(trimmed);

    // Test 6: Empty set test
    s1 = "**Hello World!**";
    set = "";
    trimmed = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, trimmed);
    free(trimmed);

    return 0;
}