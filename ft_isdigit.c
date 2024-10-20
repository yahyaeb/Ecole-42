/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:00:26 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/06 18:06:48 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/* int main(void)
{
	printf("mine %d\n", ft_isdigit('2'));
	printf("mine %d\n", ft_isdigit(1));
	printf("mine %d\n", ft_isdigit('3'));
	printf("mine %d\n", ft_isdigit('A'));
	printf("mine %d\n", ft_isdigit(32));
	printf("std %d\n", isdigit('2'));
	printf("std %d\n", isdigit(1));
	printf("std %d\n", isdigit('3'));
	printf("std %d\n", isdigit('S'));
	printf("std %d\n", isdigit(32));
}*/
