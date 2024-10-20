/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:38:25 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/14 21:12:51 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	char	*arr;

	arr = malloc(num_elements * element_size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, num_elements * element_size);
	return (arr);
}
/*
int main() {
    // Test ft_calloc by allocating memory for 5 integers
    int *arr = (int *)ft_calloc(7, sizeof(int));

    // Check if memory allocation succeeded
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the contents of the allocated memory
    printf("Contents of the allocated memory (should be all zeros):\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]); // Should print 0 for each element
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
*/
