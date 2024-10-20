/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:00:30 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/06 18:11:43 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/* int main(void) {
    printf("Testing standard isprint:\n");
    printf("isprint('A') = %d\n", isprint('A'));
    printf("isprint(9) = %d\n", isprint(9));
    printf("isprint(' ') = %d\n", isprint(' '));
    printf("isprint('~') = %d\n", isprint('~'));
    printf("isprint(31) = %d\n", isprint(31));
    printf("isprint(127) = %d\n", isprint(127));

    printf("\nTesting custom ft_isprint:\n");
    printf("ft_isprint('A') = %d\n", ft_isprint('A'));
    printf("ft_isprint(9) = %d\n", ft_isprint(9));
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
    printf("ft_isprint('~') = %d\n", ft_isprint('~'));
    printf("ft_isprint(31) = %d\n", ft_isprint(31));
    printf("ft_isprint(127) = %d\n", ft_isprint(127));
    printf("ft_isprint(128) = %d\n", ft_isprint(128));
    printf("ft_isprint(0) = %d\n", ft_isprint(0));

    return 0;
} */
