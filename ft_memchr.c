/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:49:51 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/18 16:57:46 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}
/* int main() {
    char str[] = "yassine, ba hoa x!";
    char ch = 'o';
    char *result = memchr(str, ch, sizeof(str));

    if (result != NULL)
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    else
        printf("Character '%c' not found.\n", ch);
    return 0;
} */ 
