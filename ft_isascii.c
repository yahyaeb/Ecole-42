/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:00:22 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/09/17 12:41:58 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
/* int main(void)
{
	printf("mine %d\n", ft_isascii(65));
	printf("mine %d\n", ft_isascii(128));
	printf("mine %d\n", ft_isascii(-1));
	printf("mine %d\n", ft_isascii(127));
	printf("std %d\n", isascii(65));
	printf("std %d\n", isascii(128));
	printf("std %d\n", isascii(-1));
	printf("std %d\n", isascii(127));
}*/
