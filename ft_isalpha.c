/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:00:16 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/06 18:16:19 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

/* int main(void)
{
	printf("%d\n", isalpha('E'));
	printf("%d\n", isalpha(9));
	printf("%d\n", ft_isalpha('E'));
	printf("%d\n", ft_isalpha(2));
	printf("%d\n", ft_isalpha(3));
	printf("%d\n", ft_isalpha('s'));
}
*/
