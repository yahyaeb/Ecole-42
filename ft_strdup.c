/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:23:22 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/17 12:32:09 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (s1[i])
		i++;
	dst = malloc((i + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (x < i)
	{
		dst[x] = s1[x];
		x++;
	}
	dst[i] = '\0';
	return (dst);
}
/* int main() {
    // Test case 1: Normal string
    const char *src = "Hello, World!";
    
    // Test ft_strdup
    char *dup1 = ft_strdup(src);
    if (dup1 == NULL) {
        printf("ft_strdup failed to allocate memory.\n");
        return 1;
    }

    // Test standard strdup for comparison
    char *dup2 = strdup(src);
    if (dup2 == NULL) {
        printf("Standard strdup failed to allocate memory.\n");
        free(dup1);
        return 1;
    }

    // Print the results
    printf("Original: %s\n", src);
    printf("ft_strdup: %s\n", dup1);
    printf("strdup: %s\n", dup2);

    // Compare results
    if (strcmp(dup1, dup2) == 0) {
        printf("Both strdup functions returned the same result.\n");
    } else {
        printf("The results are different.\n");
    }

    // Free allocated memory
    free(dup1);
    free(dup2);
    
    // Test case 2: Empty string
    const char *empty_src = "";
    char *empty_dup = ft_strdup(empty_src);
    if (empty_dup) {
        printf("ft_strdup of empty string: '%s'\n", empty_dup);
        free(empty_dup);
    } else {
        printf("ft_strdup failed for empty string.\n");
    }

    // Test case 3: NULL string (optional, undefined behavior)
    // Normally strdup does not handle NULL, so this part is optional.
    const char *null_src = NULL;
    char *null_dup = ft_strdup(null_src);
    if (null_dup) {
        printf("ft_strdup of NULL string: '%s'\n", null_dup);
        free(null_dup);
    } else {
        printf("ft_strdup failed for NULL string.\n");
    }
    
    return 0;
}
*/
