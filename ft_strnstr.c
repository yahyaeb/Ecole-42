/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:42:30 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/13 16:22:13 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t x;

    if (len == 0 && (!haystack || !needle))
        return NULL;
    if (needle[0] == '\0')
        return (char *)haystack;

    for (i = 0; haystack[i] && i < len; i++)
    {
        x = 0;
        while (needle[x] && haystack[i + x] && (i + x) < len && needle[x] == haystack[i + x])
            x++;
        
        if (needle[x] == '\0')
            return (char *)&haystack[i];
    }
    return NULL;
}

/* int main() {
    // Test cases
    char haystack1[] = "world";
    char *needle1 = NULL;
    size_t len1 = 0;

    char haystack2[] = "Hello, world!";
    char needle2[] = "world";
    size_t len2 = 0;

    char haystack3[] = "Hello, world!";
    char needle3[] = "abc";
    size_t len3 = 15;

    // Test ft_strnstr
    char *result1 = ft_strnstr(haystack1, needle1, len1);
    char *result2 = ft_strnstr(haystack2, needle2, len2);
    char *result3 = ft_strnstr(haystack3, needle3, len3);

    // Print results
    printf("Test 1: %s\n", result1 ? result1 : "NULL");
    printf("Test 2: %s\n", result2 ? result2 : "NULL");
    printf("Test 3: %s\n", result3 ? result3 : "NULL");

    return 0;
}  */