/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:12:07 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/13 16:20:33 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i;
	size_t	dst_or_length;

	i = 0;
	if((!src || !dst) && dstsize == 0)
		return 0;
	src_length = ft_strlen((char *)src);
	dst_length = ft_strlen((char *)dst);
	dst_or_length = dst_length;

	if(dstsize == 0)
		return src_length;
	if (dstsize <= dst_length)
        return src_length + dstsize;
	while (dst_length < dstsize - 1 && i < src_length)
	{
		dst[dst_length] = src[i];
		i++;
		dst_length++;
	}
	dst[dst_length] = '\0';
	return (dst_or_length + src_length);
}
/*int main() {
    char dest[20] = "Hello"; // Destination buffer with space for 10 characters
    char src[] = "test cava , world!"; // Source string to append
    char dest_two[20] = "Hello"; // 
    char src_two[] = "test cava , world!"; // Source string to append
    size_t size = sizeof(dest); // Total size of the dest buffer

    // Perform the concatenation
    size_t result = ft_strlcat(dest, src, size);
    size_t result_two = strlcat(dest_two, src_two, size);    
    // Print the results
    printf("ft_strlcat Total length (attempted): %zu\n", result);
    printf("strlcat: Total length (attempted): %zu\n", result_two);
    printf("Buffer size: %zu\n", size);

    return 0;
}
*/