/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:00:10 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/06 18:20:54 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

/* int main(void)
{
	printf("mine %d\n", ft_isalnum('2'));
	printf("mine %d\n", ft_isalnum(1));
	printf("mine %d\n", ft_isalnum('3'));
	printf("mine %d\n", ft_isalnum('A'));
	printf("mine %d\n", ft_isalnum(32));
	printf("std %d\n", isalnum('2'));
	printf("std %d\n", isalnum(1));
	printf("std %d\n", isalnum('3'));
	printf("std %d\n", isalnum('S'));
	printf("std %d\n", isalnum(32));
}*/
